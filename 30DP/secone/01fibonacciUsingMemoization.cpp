#include<bits/stdc++.h>
using namespace std;
/*
In euler tree we have overlapping sub problems i.e. we calulate fib(3) or fib(2) even though it was
earlier calculated in some other step in euler tree, so we try to store some values and use it again
using memoization in O(n) instead of O(2^n)
DP -> Recusrion + Memoization ( Top Down DP)
   -> Tabulation ( Bottom Up DP) - Iterative
*/
class Solution {
    public:
        int fibo(int n, vector<int>& dpArr){
            if(n <= 1) return n;
            if(dpArr[n] != -1) return dpArr[n];
            dpArr[n] = fibo(n-1, dpArr)+fibo(n-2, dpArr);
            return dpArr[n];
        }
        int fib(int n) {
            vector<int> dpArr(n+1, -1);
            return fibo(n, dpArr);
        }
    };
    int main(){
   
    }