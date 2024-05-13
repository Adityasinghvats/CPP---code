#include<iostream>
using namespace std;
int main(){
    int sp,cp;
    cout<<"Enter cost price:$";
    cin>>cp;
    cout<<"Enter selling price:$";
    cin>>sp;
    if(sp>cp){
        cout<<"Profit of:$"<<sp-cp;
    }
    else if(sp==cp){
        cout<<"No loss no profit!";
    }
    else{
        cout<<"Loss of:$"<<(cp-sp);
    }
}