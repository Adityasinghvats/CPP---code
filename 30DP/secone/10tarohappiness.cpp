#include <bits/stdc++.h>
using namespace std;
// r -> next row
// col -> used col
// f(i, a) = val of a + max(f(i-1, b) , f(i-1, c))
int main()
{
    int n;
    cin >> n;
    vector<vector<int>> dp(n, vector<int>(3, 0));
    int a, b, c;
    cin >> a >> b >> c;
    // fill first row of table
    dp[0][0] = a;
    dp[0][1] = b;
    dp[0][2] = c;

    // take input for next row and find values for each box in table
    for (int i = 1; i < n; i++)
    {
        cin >> a >> b >> c;
        dp[i][0] = a + max(dp[i - 1][1], dp[i - 1][2]);
        dp[i][1] = b + max(dp[i - 1][0], dp[i - 1][2]);
        dp[i][2] = c + max(dp[i - 1][0], dp[i - 1][1]);
    }
    // return the largest value in last row
    cout << max({dp[n - 1][0], dp[n - 1][1], dp[n - 1][2]});
    return 0;
}