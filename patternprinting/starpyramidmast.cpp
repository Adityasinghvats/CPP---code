#include<iostream>
using namespace std;
/*
**********
****  ****
***    ***
**      **
*        *
*/
int main(){
    int n;
    cout<<"Enter the no of rows and columns:"<<endl;
    cin>>n;
    int noOfSpaces = 1;
    int noOfStars = n;
    // only for first line
    for(int m = 1; m<=(n*2)+1; m++){
            cout<<'*'<<" ";
        }
        cout<<"\n";
    for(int i=1; i<=n; i++){
        // first part mast
        for(int k=1; k<=noOfStars; k++){
            cout<<'*'<<" ";  
        }
         for(int j=1; j<=noOfSpaces; j++){
            cout<<"  ";   
        }
        // second part mast
        for(int k=1; k<=noOfStars; k++){
            cout<<'*'<<" ";  
        }
        cout<<"\n";
        noOfStars--;
        noOfSpaces+=2;
    }

    }