#include<bits/stdc++.h>
using namespace std;
//Find a power of 2 that is just smaller than the n

int find_smaller(int num){
    int result = 0;
    while(num != 0){
        result = num;
        num = num & (num-1);
    }
    return result;
}
int find_greater(int num){
    int result = 0;
    while(num != 0){
        result = num;
        num = num & (num-1);
    }
    return result*2;
}

int smaller_power_of2(int n){
    n = n | (n >> 1);
    n = n | (n >> 2);
    n = n | (n >> 4);
    n = n | (n >> 8);
    n = n | (n >> 16);
    return (n+1)>>1;
}
int main(){
    int num = 28;
    // cout<<find_smaller(num);
    cout<<smaller_power_of2(num);
}