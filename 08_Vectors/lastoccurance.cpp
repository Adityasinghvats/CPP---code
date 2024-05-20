#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(6);
    for(int i = 0;i<v.size(); i++){
        cout<<"Enter element:";
        cin>>v[i];
    }
    cout<<"Enter element to  find:\n";
    int trgt;
    cin>>trgt;



    int occurence = -1;
    // used to move from 1 to last 
    for(int i = 0;i<v.size(); i++){
        if(v[i]==trgt){
            occurence=i;
        }
    }
    cout<<"The last occurence of "<<trgt<<" is "<<occurence;

    // more efficient to start from end and come back to start
     for(int i = v.size()-1;i>=0; i--){
        if(v[i]==trgt){
            occurence=i;
            break;
        }
    }

    cout<<"The last occurence of "<<trgt<<" is "<<occurence;
}