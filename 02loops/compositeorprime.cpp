#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    bool isPrime = true;
    for(int i= 2; i<num-1; i++){
        if(num%i == 0){
            isPrime = false;
            break;
        }
    }
    if(num==1) cout<<"Neither prime nor composite";
    else if(isPrime==true) cout<<num<<" is prime.";
    else cout<<num<<" is composite.";
}