#include <bits/stdc++.h>
using namespace std;
/*  Z-Algorithm */

// Calculating Z_function
vector<int> z_function(string s)
{
    int n = s.size();
    vector<int> z(n);
    int l = 0, r = 0;
    for (int i = 1; i < n; i++)
    {
        if (i < r)
        {
            z[i] = min(r - i, z[i - l]);
        }
        while (i + z[i] < n && s[z[i]] == s[i + z[i]])
        {
            z[i]++;
        }
        if (i + z[i] > r)
        {
            l = i;
            r = i + z[i];
        }
    }
    return z;
}

/*
    Naive Approach
    vector<int> z_function_trivial(string s) {
    int n = s.size();
    vector<int> z(n);
    for (int i = 1; i < n; i++) {
        while (i + z[i] < n && s[z[i]] == s[i + z[i]]) {
            z[i]++;
        }
    }
    return z;
}
*/
int main()
{
    string text, pattern;
    cin >> text >> pattern;

    // Counting number of occurences of pattern in text;
    string s = pattern + '#' + text;
    vector<int> Z = z_function(s);
    int ans = 0;
    for (int i = 0; i < Z.size(); i++)
    {
        if (Z[i] == pattern.length())
        {
            ans++;
        }
    }
    cout << ans << endl;
}