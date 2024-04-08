#include<iostream>
int main(){
    int arr[5];
     // input using for each loop
    //  possible to take input using ampersand operator to reference to same memory location as eaxh element of array
    for(int &element : arr){
        std::cin>>element;
    }
    // for(datatype elementindex : arrayname) -for each loop 
    // here a new element named i is created with each trenversal of loop and a copy og original array element is stored 
    for(int i : arr){
        std::cout<<i<<" ";
    }
   
    int arrayLength = sizeof(arr);
    std::cout<<"The size of array is:"<<arrayLength<<"\n";
    std::cout<<"The size of each element of array is:"<<sizeof(int);
}