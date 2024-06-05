#include<iostream>
using namespace std;
int main(){
    int bin[] = {1,1,0,1,0,1};
    int sum = 0;
    int x = 1;
    for(int i=5;i>=0;i--){
        sum += bin[i]*x;
        x *= 2;
    }
    cout<<sum;
}