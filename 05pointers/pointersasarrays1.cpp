#include<iostream>
using namespace std;
int main(){
    int arr[3] = {12,15,23};
    int (*ptr)[3] = &arr;
    cout<<arr<<"\n"<<ptr<<"\n"<<*ptr<<"\n"<<*arr<<"\n";
}