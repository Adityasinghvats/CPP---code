#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the term upto which series is required:";
    cin>>num;
    int a = 1;
    for(int i=1; i<num;i++){
        cout<<a<<endl;
        a = a*3;
    }
}