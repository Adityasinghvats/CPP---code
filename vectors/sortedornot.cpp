#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(6);
    for(int i = 0;i<v.size(); i++){
        cout<<"Enter element:";
        cin>>v[i];
    }
    bool sorted = true;
    // used to move from 1 to last 
    for(int i=1; i<v.size(); i++){
        if(v[i]<=v[i-1]){
            sorted = false;
        }
    }
    cout<<sorted;
   

    
}