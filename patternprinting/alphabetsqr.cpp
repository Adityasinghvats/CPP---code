#include<iostream>
using namespace std;
int main(){
    // char ch[4] = {'A','B','C','D'};
    int n;
    cout<<"Enter the value of n";
    cin>>n;
    for(int i = 0 ; i< n;i++){
        int a = 1;/*Each time second loop khtm hota hain ek dabba me a=1 store ho jata hain*/
        for(int j = 0;j< n;j++){
            int d = a+64;
            char ch = (char)d;/*Typecasting to get a charcacter value with ascii starting with 65*/
            cout<<d<<" ";
            cout<<ch<<" ";
            a++;
        }
        cout<<"\n";
    }
    // for(int i = 0 ; i< 4;i++){
    //     for(int j = 0;j<=i;j++){
    //         cout<<ch[j]<<" ";
    //     }
    //     cout<<"\n";
    // }
}