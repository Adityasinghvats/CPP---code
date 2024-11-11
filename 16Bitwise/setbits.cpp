#include<bits/stdc++.h>
using namespace std;

int count_set_bits(int num){
    return __builtin_popcount(num);
}
int count_set_bits2(int num){
    int count = 0;
    while(num>0){
        count++;
        //Brian kernighan algorithm
        num = (num & (num-1));
    }
    return count;
}

int main(){
    // cout<<count_set_bits(13);
    cout<<count_set_bits2(13);
}