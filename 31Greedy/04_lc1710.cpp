#include<bits/stdc++.h>
using namespace std;
bool cmp(vector<int> &a, vector<int>& b){
    return a[1]>b[1];
}
/*
Tc - O(n log n)
*/
        int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
            int n = boxTypes.size();
        
            sort(boxTypes.begin(), boxTypes.end(), cmp);
            int profit = 0;
            for(int i=0;i<n;i++){
                if(boxTypes[i][0] <= truckSize){
                    profit += boxTypes[i][0] * boxTypes[i][1];
                    truckSize -= boxTypes[i][0];
                }else{
                    profit += truckSize * boxTypes[i][1];
                    truckSize = 0;
                    break;
                }
            }
            return profit;
        }
int main(){
    vector<vector<int>> boxTypes = {{5,10},{2,5},{4,7},{3,9}};
    cout<<"maximum units on truck can be: "<<maximumUnits(boxTypes, 10)<<" units";
    return 0;
}