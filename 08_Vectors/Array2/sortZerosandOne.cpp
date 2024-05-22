#include<iostream>
#include<vector>
using namespace std;
void sort1(vector<int>& v){
    // Method I
    // Traversing the array once
    int nOfOne = 0, nOfZero = 0;
    for(int i=0;i<v.size();i++){
        if(v[i]==0) nOfZero++;
        else nOfOne++;
    }
    // Now print no of zero in first part and no of ones in second part
    for(int i=0;i<v.size();i++){
        if(i<nOfZero)v[i] = 0;
        else v[i]=1;
    }
}
void sort2(vector<int> &v){
    int left = 0, right = v.size()-1;
    while(left<right){
        if(v[right]==1)right--;
        if(v[left]==0)left++;

        // if(left>right) return;
        // if(v[left]==1 && v[right]==0){
        //     v[left] = 0;
        //     v[right] = 1;
        //     left++;right--;
        // }

        if(left>right) return;
        else if(v[left]==1 && v[right]==0){
            v[left] = 0;
            v[right] = 1;
            left++;right--;
        }
    }
}
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
 
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }cout<<endl;

    // sort1(v);
    // Now using two pointers
    sort2(v);

    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }cout<<endl;
}