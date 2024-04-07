#include<iostream>
/*
4444444
4333334
4322234
4321234
4322234
4333334
4444444
*/
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of column: ";
    cin>>n;
    int min = 0;
    for(int i = 1; i<=2*n-1;i++){
        for(int j = 1;j<=2*n-1;j++){
            int a = i;
            if(i>n){
                a = 2*n - i;
            }
            int b = j;
            if(b>n){
                b = 2*n - j;
            }
             if(a<b) min = a;
             else min = b;
           cout<<n+1 - min<<" ";
        }
        cout<<"\n";
    }
    return 0;
}

