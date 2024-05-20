#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    vector<int> copy(v.size());
    std::cout<<"Enter size:";
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    
    for(int j=v.size()-1;j>=0;j--){
            copy.push_back(v[j]);
        }
    
     for(int i=0;i<v.size();i++){
        std::cout<<copy.at(i)<<" ";
     }
    }