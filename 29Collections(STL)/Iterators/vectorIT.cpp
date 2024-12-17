#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(5);

    vector<int>::iterator it = v1.begin();
    // v.end() = It points to the memory location after the last elements
    // so we need to it-- before printing it
    // it is pointer to each memory location in vector
    cout<<*(it+2)<<endl;

    cout<<v1.back()<<endl;


    // auto -> datatype is automatically assigned
    for(auto it = v1.begin();it != v1.end();it++){
        cout<<*(it)<<endl;
    }

    // for each loop
    for(auto it:v1){
        cout<<it<<endl;
    }
}