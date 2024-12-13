#include<bits/stdc++.h>
using namespace std;
//list is like a dynamically allocated vector with both side access 
int main(){
    list<int> lt;
    lt.push_back(10);
    lt.push_back(12);
    lt.push_back(13);
    lt.push_back(15);
    
    list<int>::iterator it = lt.begin();
    for(auto it = lt.begin();it != lt.end();it++){
        cout<<*(it)<<endl;
    }
}