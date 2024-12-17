#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int> us;
    us.insert(10);
    us.insert(20);
    us.insert(23);
    us.insert(32);
    us.insert(32);
    int target = 32;
    if(us.find(target)!=us.end()){
        /*
        1. target exists if(us.find(target)==us.end()) doesnot exists
        2. s.find() searches for value and if not found returns s.end()
         which is a iterator next to the last element of set
         */
        cout<<"exists"<<endl;
    }
    for(int ele : us){//prints in random order and only unique elements
        cout<<ele<<" ";
    }
}