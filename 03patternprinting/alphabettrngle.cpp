#include<iostream>
using namespace std;
int main(){
      int n;
    cout<<"Enter the value of n";
    cin>>n;
    for(int i = 0 ; i< n;i++){
        int a = 1;
        for(int j = 0;j<=i;j++){
            int d = a+64;
            char ch = (char)d;
            // it can also be written as char ch = (char)(a+64)
            cout<<ch<<" ";
            a++;
        }
        cout<<"\n";
    }
    return 0;
}