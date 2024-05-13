#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the odd value of n: ";
    cin>>n;
    for(int i = 1 ; i<=n;i++){
        for(int j = 1;j<=n;j++){
           if(i==(n/2)+1 || j==(n/2)+1){
            cout<<'*'<<" ";
           }else{
            cout<<" "<<" ";
           }
        }
        cout<<"\n";
    }
    return 0;
}