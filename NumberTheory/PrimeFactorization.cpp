#include <bits/stdc++.h>
#define pb push_back
using namespace std;
int main()
{
    // Converting number into the product of its prime factors
    int n;
    cin >> n;
    vector<pair<int, int>> v;
    for (int i = 2; i * i <= n; i++)
    {
        int count = 0;
        while (n % i == 0)
        {
            count++;
            n /= i;
        }
        if (count)
        {
            v.pb({i, count});
        }
    }
    if (n > 1)
    {
        v.pb({n, 1});
    }
    for (auto &[a, b] : v)
    {
        cout << a << " " << b << endl;
    }
}