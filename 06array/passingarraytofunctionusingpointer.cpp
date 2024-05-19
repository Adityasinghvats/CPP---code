#include<iostream>
using namespace std;
void change(int *brr,int size){
    // We cant calculate size of brr becuase it is just pointer to array arr[]
    brr[0] = 5;
    for(int i = 0; i< size; i++){
        cout<<brr[i]<<" ";
    }cout<<endl;
}
// By default it follows pass by reference
// /The original array is passed and we can make changea toorginal array as well
int main(){
    int arr[] = {1,2,4,3,7,2,9,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    // Always pass size of array along with array in function 
    change(arr,size);
    for(int i = 0; i< size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<arr<<endl;
    cout<<&arr;
    return 0;
}