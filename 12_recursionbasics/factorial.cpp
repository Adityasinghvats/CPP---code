#include<iostream>
using namespace std;
int fact(int num){
    int result;
    if(num<=0) return 1;
    else result = num*fact(num-1);
    cout<<result<<endl;
    return result;
}
int main(){
    int n;
    cout<<"Enter the number n:"<<endl;
    cin>>n;
    cout<<fact(n)<<endl;
}