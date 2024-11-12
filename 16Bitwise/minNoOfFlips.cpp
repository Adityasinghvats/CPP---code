#include<iostream>
using namespace std;
int flipbits(int n,int m){
    int temp = n ^ m;
    int count = 0;
    while(temp>0){
        count++;
        temp = temp & (temp-1);
    }
    return count;
}
int main(){
    cout<<"No of different bits: "<<flipbits(5,10);
}