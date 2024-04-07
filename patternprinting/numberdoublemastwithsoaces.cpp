#include<iostream>
/*
1234567
123 567
12   67
1     7
*/
using namespace std;
int main(){
    int n;
    cout<<"Enter the no of rows and columns:"<<endl;
    cin>>n;
    int noOfSpaces = 1;
    int noOfStars = n;
    for(int m=1; m<=(n*2)+1; m++){
        cout<<m<<" ";
    }
    cout<<"\n";
    for(int i=1; i<=n; i++){
        int number = 1;
        // phla part
        for(int j = 1; j<=noOfStars; j++){
            cout<<number<<" ";
            number++;
        }
        // space jo number variable ko bhi increase kr deta hain
        for(int j=1; j<=noOfSpaces; j++){
            cout<<"  ";
            number++;   
        }
        // dusra part 
        for(int j = 1; j<=noOfStars; j++){
            cout<<number<<" ";
            number++;
        }
        cout<<"\n";
        noOfStars--;
        noOfSpaces+=2;
    }
}