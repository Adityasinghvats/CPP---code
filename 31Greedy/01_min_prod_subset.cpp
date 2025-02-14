#include<bits/stdc++.h>
using namespace std;

int minProduct(vector<int>& v){
    int cnt_negative = 0, cnt_zero = 0, cnt_pos = 0;
    int prod_pos = 1, prod_neg = 1;
    int largest_neg = INT_MIN;
    for(const int ele: v){
        if(ele<0) {
            cnt_negative++;
            prod_neg *= ele;
            largest_neg = max(largest_neg, ele);
        }
        if(ele==0) cnt_zero++;
        if(ele>0) {
            cnt_pos++;
            prod_pos *= ele;
        }
    }
    //no negative exists
    if(cnt_negative==0){
        if(cnt_zero>0) return 0;
        else {
            auto it = min_element(v.begin(), v.end());
            return *(it);
        }
    }else{//negatives exist
        if(cnt_negative%2 == 0){//return products of all -ve except largest one
            return (prod_neg / largest_neg) * prod_pos;
        }else{
            //product of all +ve and -ve
            return prod_neg*prod_pos;
        }
    }
}

int main(){
    vector<int> v {2, 3, 1, 4, 2, 0};
    cout<<minProduct(v);
}