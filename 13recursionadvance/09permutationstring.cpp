#include<bits/stdc++.h>
using namespace std;
void storeSubset(string set,string sub,vector<string> &v){
    if(set.size()==0){
        v.push_back(sub);
        return;
    }
    for(int i=0;i<set.size();i++){
        char ch = set[i];
        string left = set.substr(0,i);
        string right = set.substr(i+1);
        storeSubset(left+right,sub+ch,v);
    }  
}
int main(){
    string set = "abc";
    vector<string> v;
    storeSubset(set,"",v);
    for(string ele: v ){
        cout<<ele<<endl;
    }
}