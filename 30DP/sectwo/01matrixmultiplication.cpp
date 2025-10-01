#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> dp;
int f(vector<int> &v, int i, int j)
{
    if (i == j or i + 1 == j)
        return 0;
    if (dp[i][j] != -1)
        return dp[i][j];
    int ans = INT_MAX;
    for (int k = i + 1; k < j; k++)
    {
        ans = min(ans, f(v, i, k) + f(v, k, j) + (v[i] * v[j] * v[k]));
    }
    return dp[i][j] = ans;
}
int fbu(vector<int> &v)
{
    dp.clear();
    int n = v.size();
    dp.resize(1005, vector<int>(1000, 0));
    for (int len = 3; len <= n; len++)
    {
        for (int i = 0; i + len - 1 < n; i++)
        {
            int j = i + len - 1;
            dp[i][j] = INT_MAX;
            for (int k = i + 1; k < j; k++)
            {
                dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j] + (v[i] * v[j] * v[k]));
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    return dp[0][n - 1];
}
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    dp.clear();
    dp.resize(1005, vector<int>(1000, -1));
    // cout << f(v, 0, n - 1);
    cout << fbu(v);
    return 0;
}