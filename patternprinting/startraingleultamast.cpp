#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no of rows and columns:"<<endl;
    cin>>n;
    int noOfSpaces = 0;
    int noOfStars = n;
    int middleLine = (n/2)+1;
    for(int i=1; i<=n; i++){  
        for(int j=1; j<=noOfSpaces; j++){
            cout<<"  ";
            
        }
        for(int k=1; k<=noOfStars; k++){
            cout<<'*'<<" ";
           
        }
        noOfSpaces++;
        noOfStars--;
        cout<<"\n";
    }
}