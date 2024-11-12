#include<iostream>
using namespace std;
int flipbits(int n){
    int temp = n;
    n = n | (n>>1);
    n = n | (n>>2);
    n = n | (n>>4);
    n = n | (n>>8);
    n = n | (n>>16);
    return temp ^ n;
}
int main(){
    cout<<flipbits(16);
}