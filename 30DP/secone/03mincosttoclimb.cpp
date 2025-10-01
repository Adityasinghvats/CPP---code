#include<iostream>
#include<vector>
using namespace std;
/*
Recusrion + Memoization methods
Tip :- Try to go from n to 0 when trying to adding memoization using DP.
DP array will be of dimensiosn as per the array and for any index i it will
remember or save the minimum cost to reach there by our previous steps
Intialise by -1 to keep kind of checkmark that we have not reached it yet
*/
int helper(vector<int>& cost, int i, vector<int>& dp){
    if(i == 0 || i == 1) return cost[i];
    // if dp has our value return it
    if(dp[i] != -1) return dp[i];
    // add cost of current step I am on to then min of next
    // go to next step either 1 step or 2 steps
    return dp[i] = cost[i]+min(helper(cost, i-1, dp), helper(cost, i-2, dp));
}
int minCostClimbingStairsUsingDpArray(vector<int>& cost) {
    int n = cost.size();
    vector<int> dp(n, -1);
    // call with min cost to take first step and add cost as well
    return min(helper(cost, n-1, dp), helper(cost, n-2, dp));
}

// Cost to climb using Tabular DP
// Using fromula cost[i] += min(cost[i-1], cost[i-2])
/*
[1, 100, 1, 1, 1, 100, 1, 1, 100, 1]
[1, 100, 2, 1, 1, 100, 1, 1, 100, 1]
[1, 100, 2, 3, 1, 100, 1, 1, 100, 1]
[1, 100, 2, 3, 3, 100, 1, 1, 100, 1]
[1, 100, 2, 3, 3, 103, 1, 1, 100, 1]
[1, 100, 2, 3, 3, 103, 4, 1, 100, 1]
[1, 100, 2, 3, 3, 103, 4, 5, 100, 1]
[1, 100, 2, 3, 3, 103, 4, 5, 104, 1]
[1, 100, 2, 3, 3, 103, 4, 5, 104, 6]
return min(cost(last), cost(last-1))
*/
int minCostClimbingStairsByTabulation(vector<int>& cost) {
    int n = cost.size();
    for(int i=2; i<n; i++){
        cost [i] += min(cost[i-1], cost[i-2]);
    }
    return min(cost[n-2], cost[n-1]);
}
int main(){
    vector<int> cost = {1,100,1,1,1,100,1,1,100,1};
   int minCost = minCostClimbingStairsUsingDpArray(cost);
   cout<<"min cost to climb using DP: "<<minCost;
}