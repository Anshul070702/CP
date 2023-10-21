#include <bits/stdc++.h>
using namespace std;
int main()
{
    /*      Sieve Algorithm     */
    int n;
    vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i <= n; i += 2) // Optimization, sieving by odd numbers only
    {
        if (is_prime[i] && (long long)i * i <= n)
        {
            for (int j = i * i; j <= n; j += i)
                is_prime[j] = false;
        }
    }
    /*      Different Optimization of Sieve Algorithm    */
    /*
        => Sieving till Root
            int n;
            vector<bool> is_prime(n+1, true);
            is_prime[0] = is_prime[1] = false;
            for (int i = 2; i * i <= n; i++) {
                if (is_prime[i]) {
                    for (int j = i * i; j <= n; j += i)
                        is_prime[j] = false;
                }
            }
        => Sieving by odd numbers only
            Since all even numbers (except 2) are composite, we can stop checking even numbers at all. Instead, we need to operate with odd numbers only.
    */
}
