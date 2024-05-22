#include<iostream>
#include<vector>
using namespace std;
void sort(vector<int> &v){
    int i = 0,j=v.size()-1;
    while(i<j){if(v[i]<0)i++;
    if(v[j]>0)j--;
    else if(v[i]>0 && v[j]<0){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;j--;
    }}
}
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(-2);
    v.push_back(3);
    v.push_back(-4);
    v.push_back(-5);
    v.push_back(6);
    v.push_back(8);
     for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }cout<<endl;
    sort(v);
     for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }cout<<endl;
}