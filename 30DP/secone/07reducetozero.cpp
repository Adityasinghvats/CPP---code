#include <iostream>
#include <vector>
#include <climits>
// cses DP/Removing digits
using namespace std;
vector<int> dp;
vector<int> getDigits(int n)
{
    vector<int> result;
    while (n > 0)
    {
        if (n % 10 != 0)
        {
            int a = n % 10;
            result.push_back(a);
        }
        n /= 10;
    }
    return result;
}
int removeDigits(int n)
{
    if (n == 0)
        return 0;
    if (n <= 9)
        return 1;
    if (dp[n] != -1)
        return dp[n];
    vector<int> d = getDigits(n);
    int result = INT_MAX;
    for (int i = 0; i < d.size(); i++)
    {
        result = min(result, removeDigits(n - d[i]));
    }
    return dp[n] = 1 + result;
}
int fbu(int num)
{
    dp[0] = 0;
    for (int i = 1; i <= 9; i++)
        dp[i] = 1;
    for (int n = 10; n <= num; n++)
    {
        vector<int> d = getDigits(n);
        int result = INT_MAX;
        for (int i = 0; i < d.size(); i++)
        {
            result = min(result, dp[n - d[i]]);
        }
        dp[n] = 1 + result;
    }
    return dp[num];
}
int main()
{
    int n;
    cin >> n;
    dp.clear();
    dp.resize(10e6 + 5, -1);
    cout << fbu(n) << "\n";
    // cout << removeDigits(n) << "\n";
    return 0;
}