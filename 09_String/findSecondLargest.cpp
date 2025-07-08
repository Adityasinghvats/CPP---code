#include<bits/stdc++.h>
using namespace std;
int main(){
    string p = "1241";
    // cin>>p;
    char first = '?', second = '?';
    for(auto& i:p){
        //if a number is greater than current first, update first
        if(first == '?' || i>first){
            second = first;
            first = i;
        }else if(i > second){//if a number is smaller than first but greater than current first
            second = i;
        }
    }
    cout<<second;
    return 0;
}