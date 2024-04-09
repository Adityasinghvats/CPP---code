#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> myvect;
    vector<int> vect2(5);
     

    // for loop
    // for(int i=0; i<=5; i++){
    //     int element;
    //     cin>>element;
    //     myvect.push_back(element);
    // }
    // for(int i=0; i<=5; i++){
    //     cout<<myvect[i]<<" ";
    // }

    for(int i=0; i<=vect2.size(); i++){
        cout<<"Enter elemnt:"<<endl;
        cin>>vect2[i];
        
    }
    for(int i=0; i<=vect2.size(); i++){
        cout<<vect2[i]<<" ";
        
    }
    cout<<"\n";

    vect2.insert(vect2.begin()+2, 4);
    // for each loop
    for(int element:vect2){
        cout<<element<<" ";
    }
    cout<<"\n";

    vect2.erase(vect2.end()-2);
    // while loop
    int idx =0;
    while(idx<vect2.size()){
        cout<<vect2[idx++]<<" ";
    }
    cout<<"\n";
}