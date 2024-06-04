#include<iostream>
using namespace std;
void change(int arr[3][3]){
    arr[1][1] = 9;
}
int main(){
    int arr[][3] = {{1,2,3},{4,5,6},{7,8,9}};
    cout<<arr[1][1]<<endl;
    change(arr);
    cout<<arr[1][1]<<endl;
}