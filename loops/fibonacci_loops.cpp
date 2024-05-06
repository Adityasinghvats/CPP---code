#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the term upto which series is required:";
    cin>>num;
    int a = 0 , b=1;
    for(int i=1; i<num;i++){
        int next = a+b;
        a = b;
        b = next;
    }
    cout<<b;
}