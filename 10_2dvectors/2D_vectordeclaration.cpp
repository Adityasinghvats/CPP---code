#include<iostream>
#include<vector>
using namespace std;
int main(){
     vector<vector<int>> v(3,vector<int> (4));
    //  Equivalent to arr[3][4]
    vector<vector<int>> v1(3,vector<int> (4,2));
    cout<<v1[0][0]<<" "<<v1[0][1]<<endl;
    // No of rows
    cout<<v1.size()<<endl;
    // no of col
    cout<<v1[0].size();
}