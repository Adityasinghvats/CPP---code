#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int fact = 1;
    for(int i = 1; i<=num ;i++){
        cout<<num-i+1<<"*";
        fact *= i;
    }
    cout<<endl;
    cout<<"Factorial of "<<num<<" is "<<fact;
    }