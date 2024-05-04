#include<iostream>
using namespace std;
int main(){
    int side1,side2,side3;
    
    cout<<"Enter the sides:\n";

    cin>>side1>>side2>>side3;
   
    if(side1<(side2+side3) && side2<(side1+side3) && side3<(side1+side2))
        cout<<"It can be triangle"<<endl;
    
}