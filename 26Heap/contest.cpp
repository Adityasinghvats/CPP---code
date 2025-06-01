#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    priority_queue<long long> pq;
    unordered_set<long long> st;
    bool isPrime(long long n) {
    if (n < 2)
        return false;
    if (n == 2 || n == 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    
    for (long long i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
    }
    void find(string s,int i, int end, int j){
        if(j > end){
            return;
        }
        string str = s.substr(i, j-i);
        cout<<str<<endl;
        long long num = stoll(str);
        if(isPrime(num)){
            st.insert(num);
            cout<<num<<endl;
        }
        find(s, i, end, j+1);
    }
    long long sumOfLargestPrimes(string s) {
        long long ans = 0;
        for(int i=0;i<s.size(); i++){     
            find(s, i, s.size(), i+1);
        }
        if(st.size()==0) return ans;
        if(st.size()>2){
            for(long long num:st){
                pq.push(num);
            }
        }else {
            for(long long num:st){
               ans += num; 
            }
        }
        int count = 0;
while (!pq.empty() && count < 3) {
    ans += pq.top();
    pq.pop();
    count++;
}
        return ans;
    }
};
int main(){
    return 0;
}