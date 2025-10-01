#include <bits/stdc++.h>
// Given a number reduce to 1 in minimum steps
// Either -1 or divide by 2 or divide by 3
// It is way faster to do using DP instead of greedy
using namespace std;
#define inf INT_MAX
vector<int> dp;
int f(int n)
{
    if (n == 1)
        return 0;
    if (n == 2 || n == 3)
        return 1;
    return 1 + min({f(n - 1), (n % 2 == 0) ? f(n / 2) : inf, (n % 3 == 0) ? f(n / 3) : inf});
}
int ftd(int n, vector<int> &dp)
{
    if (n == 1)
        return 0;
    if (n == 2 || n == 3)
        return 1;
    if (dp[n] != -1)
        return dp[n];
    return dp[n] = 1 + min({ftd(n - 1, dp), (n % 2 == 0) ? ftd(n / 2, dp) : inf, (n % 3 == 0) ? ftd(n / 3, dp) : inf});
}
int fbu(int n)
{
    dp.clear();
    dp.resize(n + 1, -1);
    // vlaues of n = 2 or n = 3
    dp[1] = 0;
    dp[2] = dp[3] = 1;
    for (int i = 4; i <= n; i++)
    {
        dp[i] = 1 + min({dp[i - 1], (n % 2 == 0) ? dp[i / 2] : inf, (n % 3 == 0) ? dp[i / 3] : inf});
    }
    return dp[n];
}
int main()
{
    int n = 10;
    dp.clear();
    dp.resize(1005, -1);
    cout << ftd(n, dp) << endl;
    cout << fbu(n);
    return 0;
}