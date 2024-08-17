#include<bits/stdc++.h>
using namespace std;
void storeSubset(string set,string sub,vector<string> &v,bool flag){
    if(set.size()==0){
        v.push_back(sub);
        return;
    }
    char firstchar = set[0];
    // When string has only 1 element left
    if(set.length()==1){
        // flag is there to make sure that right subtree is not iterated
        if(flag==true) storeSubset(set.substr(1),sub+firstchar,v,true);
        storeSubset(set.substr(1),sub,v,false);
        // In case it run other calls will not happen
        return;
    }
    char secondchar = set[1];
    if(firstchar==secondchar){
        // in case first two elements are same we dont want to have duplcate elemnts through right subtree
        if(flag==true) storeSubset(set.substr(1),sub+firstchar,v,true);
        storeSubset(set.substr(1),sub,v,false); 
    }else{
        if(flag==true) storeSubset(set.substr(1),sub+firstchar,v,true);
        storeSubset(set.substr(1),sub,v,true);
    }  
}
int main(){
    string set = "aabee";
    vector<string> v;
    storeSubset(set,"",v,true);
    for(string ele: v ){
        cout<<ele<<endl;
    }
}