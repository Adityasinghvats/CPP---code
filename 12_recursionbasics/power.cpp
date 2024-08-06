#include<iostream>
using namespace std;
int power(int num,int pow){
    if(pow==0) return 1;
    int result = num*power(num,pow-1);
    return result;
}
int main(){
    int n,m;
    cout<<"Enter the number n:"<<endl;
    cin>>n;
    cout<<"Enter the power m:"<<endl;
    cin>>m;
    cout<<power(n,m)<<endl;
}