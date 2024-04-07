#include<iostream>
using namespace std;
int main(){
      int n;
    cout<<"Enter the value of n";
    cin>>n;
    for(int i = 1; i< n;i++){
        int a = 1;
        for(int j = 1;j<=i;j++){
         if(i%2==0){   char ch = (char)(a+64);
            cout<<ch<<" ";
            a++;
            }else{
                cout<<j<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}