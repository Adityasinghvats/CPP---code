#include<iostream>
using namespace std;
int main(){
    int arr[3] = {15,23,17};
    int *ptr = &arr[0];
    cout<<arr<<" "<<ptr<<" "<<*arr<<" "<<*ptr<<"\n";
    cout<<*(arr+1)<<" "<<*(ptr+2)<<endl;
    for(int i =0;i<3;i++){
        cout<<*(arr+i)<<"\n";
    }
}