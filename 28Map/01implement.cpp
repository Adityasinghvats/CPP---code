#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<int,string> mp;
    pair<int,string> p1;
    p1.first = 1;
    p1.second = "Aditya";
    mp.insert(p1);

    mp[2] = "Abhinav"; //may cause override

    auto result = mp.insert({3,"Aarav"}); //Avoids overwriting existing values and
    // provides feedback if the insertion fails.
    if(!result.second){
        cout<<"Key already exists with "<<result.first->second;
    }

    mp.emplace(4,"Aditi");//Efficient, constructs elements in place,
    // avoiding unnecessary copies or moves.

    for(const auto& ele:mp){
        cout<<ele.first<<" "<<ele.second<<endl;
    }
    mp.erase(2);
    for(const auto& ele:mp){
        cout<<ele.first<<" "<<ele.second<<endl;
    }
    if(mp.find(2)!=mp.end()){
        cout<<"found";
    }
}