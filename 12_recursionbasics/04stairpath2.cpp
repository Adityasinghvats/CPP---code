#include<iostream>
using namespace std;
// Here we can also take 3 steps
int stair(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    if(n==2) return 2;
    if(n==3) return 4;
    int result = stair(n-1)+stair(n-2)+stair(n-3);
    return result;
}
int main(){
    int n;
    cout<<"Enter the length of stair n:"<<endl;
    cin>>n;
    cout<<stair(n);
}