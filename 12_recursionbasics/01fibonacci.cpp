#include<iostream>
// Return nth factorial no.
using namespace std;
int fib(int n){
    // nth is the term in fibonnaci series here
    if(n==1 || n==2) return 1;
    // return fib(n-1)+fib(n-2);

    // Using explanation concept of euler tree digram
    int lefttree = fib(n-1);
    int righttree = fib(n-2);
    return lefttree+righttree;
}
int main(){
    int n;
    cout<<"Enter the length of fib n:"<<endl;
    cin>>n;
    cout<<fib(n);
}