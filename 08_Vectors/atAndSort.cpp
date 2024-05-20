#include<iostream>
#include<vector>
#include<algorithm>
#include "../../../../../../MinGW/lib/gcc/mingw32/6.3.0/include/c++/bits/algorithmfwd.h"
using namespace std;
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    for(int i =0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
    v.at(3) = 90;
    cout<<v.at(3)<<endl;

    sort(v.begin(),v.end());
    for(int i =0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }

}