#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> my;
    
    cout<<"Size "<<my.size()<<endl;
     cout<<"Capacity "<<my.capacity()<<endl;

    my.push_back(1);
    cout<<"Size "<<my.size()<<endl;
    cout<<"Capacity "<<my.capacity()<<endl;

    my.push_back(2);
     cout<<"Size "<<my.size()<<endl;
     cout<<"Capacity "<<my.capacity()<<endl;

    my.resize(10);
      cout<<"Size "<<my.size()<<endl;
      cout<<"Capacity "<<my.capacity()<<endl;

    my.pop_back();
    my.pop_back();
    cout<<"Size "<<my.size()<<endl;
    cout<<"Capcity "<<my.capacity()<<endl;

    
}