#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,6};
    int *ptr = arr;
    cout<<*ptr<<endl;
    ptr[3] = 9;
    // ptr++;
    // cout<<*ptr<<endl;
    for(int i=0;i<=5;i++){
        cout<<ptr[i]<<" ";
    }cout<<endl;
    *(ptr+1) = 19;
    for(int i=0;i<=5;i++){
        cout<<*ptr<<" ";
        ptr++;
    }

    // After this ptr is not pointing to anything in the array
    // we cannot chnage anything in the array using this ptr;
    // As a precaution again initilaise the ptr
    ptr = arr;
    // Always try to keep track of your pointer by increasing or decreasing it

    // Two other methods
     for(int i=0;i<=5;i++){
        cout<<i[ptr]<<" ";
        ptr++;
    }

     for(int i=0;i<=5;i++){
        cout<<i[arr]<<" ";
        ptr++;
    }
    return 0;
}