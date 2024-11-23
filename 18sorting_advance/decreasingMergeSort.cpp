#include<bits/stdc++.h>
using namespace std;
void merge(vector<int> &a, vector<int> &b, vector<int> &res){
    int i=0, j=0, k=0;
    while(i<a.size() && j<b.size()){
        if(a[i]>=b[j]) res[k++] = a[i++];
        else res[k++] = b[j++];
    }
    if(i>=a.size()){
        while(j<b.size()){
            res[k++] = b[j++];
        }
    }
    if(j>=b.size()){
        while(i<a.size()){
            res[k++] = a[i++];
        }
    }
}
void decMergesort(vector<int> &v){
    int n = v.size();
    if(n==1) return;
    int s1 = n/2, s2 = n-(n/2);
    vector<int> a(s1), b(s2);
    for(int i=0;i<s1;i++) a[i] = v[i];
    for(int i=0;i<s2;i++) b[i] = v[s1+i];
    decMergesort(a);
    decMergesort(b);
    merge(a,b,v);
    a.clear();
    b.clear();
}
int main(){
    int arr[] = {5,1,3,0,4,9,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+n);
    for(int ele:v) cout<<ele<<" ";
    cout<<endl;
    decMergesort(v);
    for(int ele:v) cout<<ele<<" ";
    return 0;
}