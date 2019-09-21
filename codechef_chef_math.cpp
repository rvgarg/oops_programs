#include <bits/stdc++.h>
using namespace std;
unsigned long long int powr(unsigned long long int n, unsigned long long int p, unsigned long long int mod)
{
    unsigned long long int res = 1;
    n = n % mod;
    while (p > 0)
    {
        if (p & 1)
            res = (res * n) % mod;
        p = p >> 1;
        n = (n * n) % mod;
    }
    return res;
}
int main()
{
    long long test;
    cin >> test;
    while (test > 0)
    {
        unsigned long long n;
        cin >> n;
        unsigned long long int result = 1;
        for (unsigned long long int i = 1; i <= n; i++)
        {
            result = ((result) * (powr(i, n - i + 1, 1000000007))) % 1000000007;
        }
        cout << result << endl;
        test--;
    }

    return 0;
}