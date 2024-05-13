#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter number of rows and columns:";
    cin>>m;
  
    for(int i = 1;i<=m;i++){
        int d = 1;/*necesaary to write it under the scope of outer function*/
        // char ch = (char)(64+d);
        for(int j = 1 ;j<=m-i;j++){/*For spaces we need extra loop*/
            cout<<"  ";
        }
        for(int k = 1;k<=i;k++){/*For stars*/
            char ch = (char)(64+d);
            cout<<ch<<" ";
            d++;
        }
        cout<<"\n";    
    }

}