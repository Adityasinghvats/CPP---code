#include<bits/stdc++.h>
//fractional knapsack allows user to take a fraction of the item
using namespace std;
/*
TC -> O(n log n)
SC -> O( sorting algo space)
*/
//sort using custom comparator
bool cmp(pair<int, int> &p1, pair<int, int> &p2){
    //value , weight
    double r1 = (p1.first*1.0) / (p1.second*1.0);
    double r2 = (p2.first*1.0) / (p2.second*1.0);
    return r1>r2;
}
double fractional_knapsack(vector<int>& profit, vector<int>& weight, int n, int w){
    vector<pair<int,int>> arr;
    for(int i=0;i<n;i++){
        arr.push_back({profit[i], weight[i]});
    }
    sort(arr.begin(), arr.end(), cmp);
    double res = 0;
    for(int i=0;i<n;i++){
        if(arr[i].second <= w){
            res += arr[i].first;
            w -= arr[i].second;
        }else{
            res += ((arr[i].first * 1.0) / (arr[i].second * 1.0))*w;
            w = 0;
            break;
        }
    }
    return res;
}
int main(){
    vector<int> profit = {100, 60, 120};
    vector<int> weight = {10, 20, 30};
    int w = 50;
    int n = 3;//no of elements
    cout<<fractional_knapsack(profit, weight, n, w);
    return 0;
}