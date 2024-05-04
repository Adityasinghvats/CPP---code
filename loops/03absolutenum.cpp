#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a number:";
    int num;
    cin>>num;
    // if(num>=0){
    //     cout<<"Absolute no.:"<<num;
    // }else{
    //     cout<<"Absolute no.:"<<-(num);
    // }
    if(num<0){
        num = -num;
    }
    cout<<"Absolute no.:"<<num;
}