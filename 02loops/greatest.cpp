#include<iostream>
using namespace std;
int main(){
    int x = 5, y = 8, z = 10;
    if(x>y && x>z){
        cout<<"Greatest:"<<x;
    }
    
    else if(y>x && y>z){
        cout<<"Greatest:"<<y;
    }
    
    else{
        cout<<"Greatest:"<<z;
    }
    return 0;
}