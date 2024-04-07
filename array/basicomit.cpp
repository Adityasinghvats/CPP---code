#include<iostream>
int main(){
    int arr[5] = {2,5,7,8,4};
    for(int i : arr){
        std::cout<<i<<"\n";
    }
    int arrayLength = sizeof(int);
    std::cout<<"The size of array is:"<<arrayLength<<"\n";
    std::cout<<"The size of array is:"<<sizeof(int);
}