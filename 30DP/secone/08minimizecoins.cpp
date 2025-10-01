#include <bits/stdc++.h>
/*
Consider a money system consisting of n coins. Each coin has a positive integer value.
Your task is to produce a sum of money x using the available coins in such a way that the number of coins is minimal.
For example, if the coins are \{1,5,7\} and the desired sum is 11, an optimal solution is 5+5+1 which requires 3 coins.
*/
using namespace std;
vector<int> c;
vector<int> dp;
int getCoins(int x)
{
    if (x == 0)
        return 0;
    if (dp[x] != -1)
        return dp[x];
    int result = INT_MAX;
    for (int i = 0; i < c.size(); i++)
    {
        // in case the coin is larger then the change we need
        if (x - c[i] < 0)
            continue;
        result = min(result, getCoins(x - c[i]));
    }
    if (result == INT_MAX)
        return dp[x] = INT_MAX;
    return dp[x] = 1 + result;
}
int fbu(int x)
{
    // 0 coins needed to get 0 value
    dp[0] = 0;
    for (int num = 1; num <= x; num++)
    {
        int result = INT_MAX;
        for (int i = 0; i < c.size(); i++)
        {
            if (num - c[i] < 0)
                continue;
            result = min(result, dp[num - c[i]]);
        }
        if (result == INT_MAX)
            dp[num] = INT_MAX;
        else
            dp[num] = 1 + result;
    }
    return dp[x];
}
int main()
{
    int n, x;
    cin >> n >> x;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        c.push_back(num);
    }
    dp.clear();
    dp.resize(10e6 + 5, -1);
    // int ans = getCoins(x);
    int ans = fbu(x);
    if (ans == INT_MAX)
        cout << -1 << "\n";
    else
        cout << ans << "\n";
    return 0;
}