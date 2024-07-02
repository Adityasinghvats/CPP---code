#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[8] = {6,3,2,4,1,7,2,5};

    // This method takes ore space due to extra vector
    // vector<int> check(8,0);
    // for(int i=0;i<8;i++){
    //     int idx = arr[i];
    //     check[idx]++;
    //     if(check[idx]>1){
    //         cout<<"This element occurs more than once :"<<arr[i]<<endl;
    //         break;
    //     }
    // }

    int sum = (8*9)/2;
    int sumArr = 0;
    for(int i=0;i<8;i++){
        sumArr += arr[i];
    }
    int diff = sum-sumArr;
    cout<<"Dupliacate element is: "<<8-diff;
}