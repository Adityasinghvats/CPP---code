#include<iostream>
using namespace std;
int main(){
    int arr1[] = {1,2,3,4,5};
    int arr2[] = {6,7,8,9,10};
    int mergedarray[10];
    for(int i = 0;i<5;i++){
        mergedarray[i] = arr1[i];
    }
    for(int i = 0;i<5;i++){
        mergedarray[5+i] = arr2[i];
    }
    for(int i = 0;i<10;i++){
        cout<<mergedarray[i]<<" ";
    }
}