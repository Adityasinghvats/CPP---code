#include<iostream>
#include<vector>
using namespace std;
void reversepart(int i, int j,vector<int> &v){
    while (i<j)
    {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;j--;
    }
    return;
}
void display(vector<int>& v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }cout<<endl;
}
int main(){
    vector<int> v;
    cout<<"Enter size:";
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    display(v);
    reversepart(0,3,v);
    display(v);
}