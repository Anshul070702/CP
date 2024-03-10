#include <bits/stdc++.h>
using namespace std;

/*  Standard KMP Algorithm   */

// Computing LPS Array
vector<int> computeLPS(string pat)
{
    int m = pat.size();
    vector<int> lps(m);
    lps[0] = 0;
    int len = 0;
    int i = 1;
    while (i < m)
    {
        if (pat[i] == pat[len])
        {
            len++;
            lps[i] = len;
            i++;
        }
        else
        {
            if (len != 0)
            {
                len = lps[len - 1];
            }
            else
            {
                lps[i] = 0;
                i++;
            }
        }
    }
    return lps;
}
int main()
{
    string text, pattern;
    cin >> text >> pattern;
    vector<int> lps = computeLPS(pattern);
    int n = text.length(), m = pattern.length();
    int i = 0, j = 0;
    while (i < n)
    {
        if (text[i] == pattern[j])
        {
            i++;
            j++;
            if (j == m)
            {
                // pattern is found in text at index (i-j)
                j = lps[j - 1];
            }
        }
        else
        {
            if (j != 0)
            {
                j = lps[j - 1];
            }
            else
            {
                i++;
            }
        }
    }
}