#include <bits/stdc++.h>
using namespace std;
/*      Method : 1 => Not optimized since Sqrt function also takes time to calculate        */
int Method1(int n)
{
    int div = 0;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            div++;
            if ((n / i) != i)
            {
                div++;
            }
        }
    }
    return div;
}
/*      Method : 2 (Optimized approach)     */
int Method2(int n)
{
    int div = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            div++;
            if ((n / i) != i)
            {
                div++;
            }
        }
    }
    return div;
}
int main()
{
    /*      Counting Divisors of any Number      */
    int n;
    cin >> n;
}