#include<iostream>
using namespace std;
void process(int *arr, int n){
    // Inside this function we have the access of same aaray as main function
     for(int i =0;i<3;i++){
        cout<<*(arr+i)<<"\n";
    }
    *(arr+1) = 56;
}
int main(){
    int arr[3] = {15,23,17};
    process(arr,3);
     for(int i =0;i<3;i++){
        cout<<*(arr+i)<<" ";
    }
    return 0;
    }