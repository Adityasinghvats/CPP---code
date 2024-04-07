#include<iostream>
using namespace std;
int main(){
    int k = 0,l = 0, m= 0,n = 0;
    cout<<"Enter no of rows:";
    cin>>k;
    cout<<"Enter no of columns:";
    cin>>l;
    int a[k][l];
     for(int i = 0; i<k;i++){
        for(int j = 0; j<l ;j++){
            cin>>a[i][j];
        }
    }
    m = k ; n = l;
    int b[m][n];
    for(int i = 0; i< k;i++){
        for(int j = 0; j<l ;j++){
            b[j][i] = a[i][j];
        }
    }
      for(int i = 0; i<k;i++){
        for(int j = 0; j<l ;j++){
            std::cout<<b[i][j]<<" ";
        }
    }
}