#include<bits/stdc++.h>
using namespace std;
int main(){
    //ordered set arranges on basis of key
    map<int,string> mp;
    map<string,int> mp2;
    mp.emplace(1,"a");
    mp.emplace(2,"we");
    mp.emplace(3,"abd");
    mp.emplace(4,"z");
    mp.emplace(5,"m");

    mp2.emplace("a",1);
    mp2.emplace("we",2);
    mp2.emplace("abd",5);
    mp2.emplace("z",0);
    mp2.emplace("m",9);


    for(auto ele: mp){
        cout<<ele.first<<":"<<ele.second<<endl;
    }
    cout<<endl;
    for(auto ele: mp2){
        cout<<ele.first<<":"<<ele.second<<endl;
    }

}