#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v{1,1,2,3,3,4,7,7};
    unique(&v);
    for(int ele:v){
        cout<<ele<<" ";
    }
}