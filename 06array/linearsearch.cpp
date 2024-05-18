#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,4,3,7,2,9,6};
    int target = 3;
    int size = sizeof(arr)/sizeof(arr[0]);
    // Checkmark
    bool flag = false;
    for(int i = 0; i< size; i++){
        if(arr[i]==target){
            flag = true;
        }
    }
    if(flag==true) cout<<"Present";
    else cout<<"Not present";
    return 0;
}