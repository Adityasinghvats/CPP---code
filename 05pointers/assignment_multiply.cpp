#include<iostream>
using namespace std;
void multiply(int *a,int *b,int *prod){
    *prod = (*a) * (*b);
    return;
}
int main(){
    int x = 70, y = 12;
    int product;
    multiply(&x,&y,&product);
    cout<<product;
}