// Rotate by k steps means to bring the last k elements to front 
#include<iostream>
#include<vector>
using namespace std;
void reversepart(int i, int j,vector<int> &v){
    while (i<j)
    {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;j--;
    }
    return;
}
void display(vector<int>& v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }cout<<endl;
}
int main(){
    vector<int> v;
    cout<<"Enter size:";
    int s;
    cin>>s;
    for(int i=0;i<s;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    int k = 2;
    // k = no of steps
    // If we have any k larger size of vector
    // we use k = k%n
    // Faltu k array rotate nhi hoga only required steps chlega
    // Eg agar k = 9 , isme pura ek array baar rotate hoga fir 2 baar extra tb answer ayega
    //  instead sirf 2 baar kr do same answer
    int n = v.size();

    display(v);

    reversepart(0,n-k-1,v);
    reversepart(n-k,n-1,v);
    reversepart(0,n-1,v);

    display(v);
}