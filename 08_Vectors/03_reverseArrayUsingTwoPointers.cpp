#include<iostream>
#include<vector>
#include<algorithm>
#include "../../../../../../MinGW/lib/gcc/mingw32/6.3.0/include/c++/bits/algorithmfwd.h"
using namespace std;
int main(){
    vector<int> v;
    cout<<"Enter size:";
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }


    // int str = 0;
    // int end = v.size()-1;
    
    // while(end>=str){
    //     int temp = v[str];
    //     v[str] = v[end];
    //     v[end] = temp;
    //     str++;
    //     end--;
    // }

    for(int i=0,j=v.size()-1;i<=j;i++,j--){
         int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
    }
    // Inbuilt function
    reverse(v.begin(),v.end());


    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
}