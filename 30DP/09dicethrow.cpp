#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long int
using namespace std;
vector<ll> dp(1000005, -1);
ll getWays(int n)
{
    if (n == 0)
        return 1; // condition of not picking anything as in case of subsets, where void is also valid
    if (dp[n] != -1)
        return dp[n];
    ll cnt = 0;
    for (int i = 1; i <= 6; i++)
    {

        if (n >= i)
        {
            // (a+b) mod c = (a mod c + b mod c)mod c
            cnt = (cnt % mod + getWays(n - i) % mod) % mod;
        }
    }
    return dp[n] = cnt % mod;
}
ll bottomUp(int n)
{
    dp[0] = 1;
    for (int k = 1; k <= n; k++)
    {
        // count is being reset to get val for reaching each new number
        ll cnt = 0;
        for (int i = 1; i <= 6; i++)
        {

            if (k >= i)
            {
                // (a+b) mod c = (a mod c + b mod c)mod c
                cnt = (cnt % mod + dp[k - i] % mod) % mod;
            }
        }
        dp[k] = cnt % mod;
    }
    return dp[n];
}
int main()
{
    int n;
    cin >> n;
    cout << bottomUp(n) << "\n";
    return 0;
}