#include<iostream>
#include<vector>
using namespace std;
//find the first negatvie number in array in window of size k
vector<int> firstNegative(int *arr, int n, int k){
    int i = 1;
    int fni = -1; //first negative idx; 
    int j = i+k-1;

// first window
    for(int i=0;i<k;i++){
        if(arr[i]<0){
            fni = i;
            break;
        }
    }

    int vecsize = n-k+1;
    vector<int> ans(vecsize);
    if(fni == -1) arr[0] = 1;
    else ans[0] = arr[fni];

    while(j<n){
        fni = -1;
        if(fni>=i) ans[i] = arr[fni];
        else{
            for(int x=i;x<=j;x++){
                if(arr[x]<0) {
                    fni = x;
                    break;
                }
            }
            if(fni!=-1) ans[i] = arr[fni];
            else ans[i] = 1;
        }
        i++;
        j++;
    }
    return ans;
}
int main(){
    int arr[] = {2,-3,4,4,-7,-1,4,-2,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 2; //size of window

    vector<int> ans = firstNegative(arr,n,k);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}

// next lc 209