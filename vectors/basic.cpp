#include<vector>
#include<iostream>
using namespace std;
// vectors are dynamic arrays increase or decrease with need
// declaration
int main(){
    vector<int> first(5);
    // vector<datatype> name(size optional)
    // size
    cout<<first.size()<<"\n";
    cout<<first.capacity()<<"\n";
    // resize to certain needed length
    first.resize(8);
    cout<<first.size()<<"\n";
    // capacity>=size (cpacity increases with power of 2 i.e 1,2,4,8,16)
    cout<<first.capacity();
    // Add elements
    
    }