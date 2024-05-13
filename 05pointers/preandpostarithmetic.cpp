#include<iostream>
using namespace std;
int main(){
    int arr[2] = {1,23};
    int *ptr = &arr[0];
    cout<<ptr<<" "<<*ptr<<"\n";
    *ptr++;
    cout<<ptr<<" "<<*ptr<<"\n";
    *ptr--;
    cout<<ptr<<" "<<*ptr<<"\n";
    (*ptr)++;/*Here we are incraesing the value of the number stored at thah address using derefernce*/
    cout<<arr[0]<<" "<<arr[1]<<"\n";
    *ptr++;
    (*ptr)++;
    cout<<arr[0]<<" "<<arr[1]<<"\n";
    cout<<++*ptr<<"\n";/*Here the pointer is already at 24 so it is incrementing and ointing to it*/
    cout<<arr[0]<<" "<<arr[1]<<"\n";
    return 0;
}