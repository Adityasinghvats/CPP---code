#include<iostream>
using namespace std;
int sum(int num){
    if(num==0) return 0;
    int result = num+sum(num-1);
    return result;
}
int main(){
    int n;
    cout<<"Enter the number n:"<<endl;
    cin>>n;
    cout<<sum(n);
}