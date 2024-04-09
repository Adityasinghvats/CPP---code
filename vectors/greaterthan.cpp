#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(6);
    for(int i = 0;i<v.size(); i++){
        cout<<"Enter element:";
        cin>>v[i];
    }
    cout<<"Enter element to compare with:\n";
    int trgt;
    cin>>trgt;



    int count = 0;
    // used to move from 1 to last 
    for(int element:v){
        if(element>trgt){
            cout<<element<<" ";
            count++;
        }
    }
    cout<<"\nNo of elememts greater are "<<count<<endl;
   

    
}