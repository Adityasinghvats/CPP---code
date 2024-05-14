#include<iostream>
#include<algorithm>
using namespace std;
int gcd(int x,int y){
    int gcd;
    for(int i = min(x,y);i>=1;i--){
        if(x%i==0 && y%i==0){
            gcd = i;
            break;
        }
    }
    return gcd;
}
int main(){
    int x,y;
    cin>>x>>y;
    cout<<gcd(x,y);
}