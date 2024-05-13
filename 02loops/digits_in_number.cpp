#include<iostream>
using namespace std;
int main(){
    int num;
    int count = 0;

    // count all digits
    cout<<"Enter number:"<<endl;
    cin>>num;
    int a = num;
    while(num!=0){
        num/=10;
        count++;
    }
    if(a==0) cout<<1;
    else cout<<count<<endl;

// sum of digits
    int sum = 0;
    int lastdigit = 0;
    while(a!=0){
        lastdigit = a%10;
        sum += lastdigit;
        a /= 10;
    }
    
    cout<<sum;
}