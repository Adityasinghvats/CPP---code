#include<iostream>
using namespace std;
int stair(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    if(n==2) return 2;
    int result = stair(n-1)+stair(n-2);
    return result;
}
int main(){
    int n;
    cout<<"Enter the length of stair n:"<<endl;
    cin>>n;
    cout<<stair(n);
}