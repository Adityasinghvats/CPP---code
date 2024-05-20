#include<iostream>
#include<vector>
using namespace std;
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
    int str,end;
    cout<<"Enter the starting and ending to reverse: "<<endl;
    cin>>str>>end;
    for(int i=str-1,j=end-1;i<=j;i++,j--){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
    }
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
}