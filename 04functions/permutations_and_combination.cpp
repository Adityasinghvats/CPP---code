#include<iostream>
using namespace std;
int factorial(int num){
    int fact = 1;
    for(int i = 2;i<=num; i++){
        fact *= i;
    }
    return fact;
}

int permutation(int n,int r){
    int result = factorial(n)/factorial(n-r);
    return result;
}

int combination(int n,int r){
    int result = factorial(n)/(factorial(r)*factorial(n-r));
    return result;
}
int main(){
    int num1,num2;
    cin>>num1>>num2;
    cout<<factorial(num1)<<endl;
    cout<<permutation(num1,num2)<<endl;
    cout<<combination(num1,num2)<<endl;

}