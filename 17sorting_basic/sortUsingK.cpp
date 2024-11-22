#include<bits/stdc++.h>
using namespace std;
float min(float a,float b){
    return a>b ? b : a;
}
float max(float a,float b){
    return a>b ? a : b;
}
int main(){
    int arr[] = {5,3,10,3};
    int n = 4;
    float kmin = (float)(INT_MIN);
    float kmax = (float)(INT_MAX);
    bool flag = true;
    for(int i=0;i<n-1;i++){
        if(arr[i]>=arr[i+1]){//arr[i] - arr[i+1] > 0
            kmin = max(kmin,(arr[i]+arr[i+1])/2.0);
        }else{
            kmax = min(kmax,(arr[i]+arr[i+1])/2.0);
        }
        if(kmax<kmin){
            flag = false;
            break;
        }
    }
    if(flag == false) cout<<-1;
    else if(kmax==kmin){
        if(kmin-int(kmin)>0){//kmin and kmax are integers
            cout<<"There is only one value of k: "<<kmin<<endl;
        }
        else{
            cout<<-1;
        }
    }
    else{
        if(kmin-int(kmin)>0){
            kmin = (int)kmin+1;
        }
        cout<<kmin<<" "<<(int)kmax;
    }
    return 0;
}