#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    char operate;
    cout<<"Enter first number :";
    cin>>num1;
    cout<<"Enter the operation (+,-,*,/):";
    cin>>operate;
    cout<<"Enter second number :";
    cin>>num2;
    switch(operate){
        case '+':
        cout<<num1+num2;
        break;
        case '-':
        cout<<num1-num2;
        break;
        case '*':
        cout<<num1*num2;
        break;
        case '/':
        cout<<num1/num2;
        break;
        default:
        cout<<"Enter a valid operand:";

    }
}