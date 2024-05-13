#include<iostream>
using namespace std;
int addNumbers(int m,int n = 3, int p = 1){
    return m+n+p;
}
int main(){
    cout<<addNumbers(10)<<endl;
    // 14
    cout<<addNumbers(10,4)<<endl;
    // 15
    cout<<addNumbers(10,3,78)<<endl;
    // 91
}