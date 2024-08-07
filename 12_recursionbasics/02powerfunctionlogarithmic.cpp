#include<iostream>
using namespace std;
int power(int num,int pow){
    if(pow==0) return 1;
    if(pow==1) return num;
    // Divided the power into two equal power for TC = 0(log n)
//    one call is stored in a variable int order to reduce recurring calls
    int result = power(num,pow/2);
    if(pow%2 == 0){
        return result*result;
    }else{
        return result*result*num;
    }
    
}
int main(){
    int n,m;
    cout<<"Enter the number n:"<<endl;
    cin>>n;
    cout<<"Enter the power m:"<<endl;
    cin>>m;
    cout<<power(n,m)<<endl;
}