#include<iostream>
using namespace std;

// Function prototyping
int add(int = 0, int = 0);
int main(){
    cout<<add(7);
}
int add(int x,int y){
    return x+y;
}