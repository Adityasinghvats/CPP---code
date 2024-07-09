// It makes the point that binary search is not only applicalbe on index
#include<iostream>
using namespace std;
int main(){
    int x = 20;
        int lo = 0, hi = x;
        while(lo<=hi){
            int mid = lo+(hi-lo)/2;
            long long m = (long long) mid;
            long long num = (long long) x;
            if(m*m == num) cout<<mid;
            if(m*m > num) hi = mid-1;
            if(m*m < num) lo = mid+1;
        }
        cout<<hi<<endl;
}