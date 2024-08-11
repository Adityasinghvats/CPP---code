#include<iostream>
#include<string>
#include<vector>
using namespace std;
void subSet(string set,string sub){
    if(set.size()==0){
        cout<<"|"<<sub<<" "<<"|";
        return;
    }
    char ch = set[0];
    subSet(set.substr(1),sub+ch);
    subSet(set.substr(1),sub);
}
void storeSubset(string set,string sub,vector<string> &v){
    if(set.size()==0){
        v.push_back(sub);
        return;
    }
    char ch = set[0];
    storeSubset(set.substr(1),sub+ch,v);
    storeSubset(set.substr(1),sub,v);
}
int main(){
   string set = "abc";
//    subSet(set,"");
   vector<string> v;
   storeSubset(set,"",v);
   for(string ele : v){
    cout<<ele<<endl;
   }
}