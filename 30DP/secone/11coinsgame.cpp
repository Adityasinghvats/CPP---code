#include <bits/stdc++.h>
using namespace std;
// game theory question where the last one to pick up the coins wins
// palyer has 1, l or k coins to take among tootal of n coins
// find f(n) where n can tell us whether it is winning state orlossing state
// f(n, k, l)
// f(n-1), f(n-k), f(n-l)
// 0 -> lossing, 1 -> winning
// f(n) = not (f(n-1) && f(n-k) && f(n-l))
// f(n) = 1 (if 0, 0, 0)
// f(n) = 0 if()

// based on formula pre calculate all the winning and lossing states preemptively
// for all values of n
int main()
{
    int k, l, m; // m is no of game
    cin >> k >> l >> m;
    // bottom up dp
    vector<bool> dp(1000005, -1);
    dp[1] = 1;
    dp[k] = 1;
    dp[l] = 1;
    for (int i = 2; i <= 1000000; i++)
    {
        if (i == k or i == l)
            continue;
        dp[i] = !(dp[i - 1] and ((i - k >= 1) ? dp[i - k] : 1) and ((i - l >= 1) ? dp[i - l] : 1));
    }
    for (int i = 0; i < m; i++)
    {
        int n;
        cin >> n;
        if (dp[n] == 1)
        {
            // n-> winning state
            cout << "A";
        }
        else
        {
            // n->loosing state
            cout << "B";
        }
    }
    return 0;
}