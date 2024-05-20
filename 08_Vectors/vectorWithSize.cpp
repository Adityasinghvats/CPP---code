#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> my(10,7);
    // This means size is intialised to 10 and each element is 7
    cout<<my[0]<<endl;
    cout<<my[1]<<endl;
    cout<<my.size()<<endl;
    cout<<my.capacity()<<endl;
    }