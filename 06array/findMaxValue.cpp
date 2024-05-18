#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[] = {1,2,4,3,7,2,9,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    int max = INT8_MIN;
    for(int i = 0; i< size; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }cout<<max<<endl;
    return 0;
}