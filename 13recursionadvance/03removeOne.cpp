#include<iostream>
#include<vector>
using namespace std;
void removeOne(vector<int> &num,vector<int> &modified,int idx){
    if(num.size()==idx){
        return;
    }
    int number = num[idx];
    if(number != 1){
        modified.push_back(number);
    } 
    removeOne(num,modified,idx+1);
}
int main(){
    vector<int> num(5);
    num.push_back(1);
    num.push_back(4);
    num.push_back(1);
    num.push_back(3);
    num.push_back(1);
    vector<int> modified;
    removeOne(num,modified,0);
    for(int i = 0;i<modified.size();i++){
        cout<<modified[i];
    }
}