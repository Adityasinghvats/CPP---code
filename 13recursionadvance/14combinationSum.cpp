#include<bits/stdc++.h>
using namespace std;
// void combination(vector<int> v,int arr[],int n,int trgt,int idx){
//     if(trgt==0){
//         for(int i=0;i<v.size();i++){
//             cout<<v[i];
//         }
//         cout<<endl;
//         return;
//     }
//     for(int i=idx;i<n;i++){
//         v.push_back(arr[i]);
//         combination(v,arr,n,trgt-v[i],i);
//         v.pop_back();
//     }
// }
void combination2(vector<int> v,int arr[],int n,int trgt,int idx){
    
    if(trgt==0){
        for(int i=0;i<v.size();i++){
            cout<<v[i];
        }
        cout<<endl;
        return;
    }
    // if(trgt<0) return;
    
    for(int i=idx;i<n;i++){
        v.push_back(arr[i]);
        combination2(v,arr,n,trgt-v[i],i);
        v.pop_back();
    }
    // arr.erase(arr.begin());
}
int main(){
    int arr[] = {2,3,5,1,3,4};
    vector<int> v;
    // vector<int> arr;
    // arr.push_back(2);
    // arr.push_back(3);
    // arr.push_back(5);
    // arr.push_back(1);
    // arr.push_back(2);
    combination2(v,arr,3,8,0);
}