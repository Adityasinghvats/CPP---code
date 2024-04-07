#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no of rows and columns:"<<endl;
    cin>>n;
    for(int i=1; i<=n; i++){
        // declare a variable to store the first number of each row in second triangle
        int firstnumber = i-1;
        //For spaces 
        for(int j=1; j<=n-i; j++){
            cout<<"  ";
        }
        // For first tringle
        for(int k=1; k<=i; k++){
            cout<<k<<" ";
        }
        // For second triangle
        for(int m=1; m<=i-1; m++){
            cout<<firstnumber<<" ";
            firstnumber--;
        }
        cout<<"\n";
    }
}