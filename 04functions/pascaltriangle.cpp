#include<iostream>
using namespace std;
int fact(int num){
    int fact = 1;
    for(int i = 2;i<=num;i++){
        fact *= i;
    }
    return fact;
}
int ncr(int n,int r){
    int ncr = fact(n)/(fact(n-r)*fact(r));
    return ncr;
}
int main(){
    int num;
    cout<<"Enter the number:";
    cin>>num;
    for(int i = 0;i<=num;i++){
        for(int j = 0;j<num-i;j++){
            cout<<" ";
        }
        for(int j = 0;j<=i;j++){
            cout<<ncr(i,j)<<" ";
        }
        cout<<endl;
    }
    // learn about optimised solution as well
}