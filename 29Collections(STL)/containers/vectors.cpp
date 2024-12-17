#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v1;
    v1.push_back(1);
    // Same as pusback used when insertind without container
    v1.emplace_back(2);

    // Vector of pairs
    vector<pair<int,int>> v2;
    v2.push_back({1,2});
    v2.emplace_back(3,4);


    // Copy to another vector
    vector<int>v3(v1);

    // Insert function
    vector<int>v(2,100);
    // (100,100)
    v.insert(v.begin()+1,3,50);
    // (100,50,50,50,100)

}