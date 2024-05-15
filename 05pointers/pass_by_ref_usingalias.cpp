#include<iostream>
using namespace std;
void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
    return;
}
int main(){
    int x=7,y=3;
    swap(x,y);
    cout<<x<<" "<<y;
}