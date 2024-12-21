#include<iostream>
#include<stack>
using namespace std;
int solve(int v1,char op,int v2){
    if(op=='+') return v1+v2;
    else if(op=='-') return v1-v2;
    else if(op=='*') return v1*v2;
    else return v1/v2;
}
int main(){
    string exp = "79+4*8/3-"; //5
    stack<int> val;
    for(int i=0;i<exp.length();i++){
        if(exp[i]>=48 && exp[i]<=57){
            val.push(exp[i]-48); //gives actual value of digit
        }else{ //on finding a operator simply perform the operation
            char op = exp[i];
            int val2 = val.top();
            val.pop();
            int val1 = val.top();
            val.pop();
            int ans = solve(val1,op,val2);
            val.push(ans);
       }
    }
    cout<<val.top();
}