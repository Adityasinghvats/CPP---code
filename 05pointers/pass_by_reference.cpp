#include<iostream>
using namespace std;
void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
    return;
}
int main(){
    int x,y;
    cin>>x>>y;
    int *ptrx = &x;
    int *ptry = &y;
    swap(ptrx,ptry);
    cout<<x<<" "<<y;
}