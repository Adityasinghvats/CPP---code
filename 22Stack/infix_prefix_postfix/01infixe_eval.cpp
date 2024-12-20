#include<iostream>
#include<stack>
using namespace std;
int priority(char ch){
    if(ch=='+' || ch=='-') return 1; else return 2; //for * and /
}
int solve(int v1,char op,int v2){
    if(op=='+') return v1+v2;
    else if(op=='-') return v1-v2;
    else if(op=='*') return v1*v2;
    else return v1/v2;
}
int main(){
    string exp = "2+6*4/8-3";
    //we need 2 stacks one for val 2 for operator
    stack<int> val;
    stack<char> ops;
    for(int i=0;i<exp.length();i++){
        //check if number or not
        if(exp[i]>=48 && exp[i]<=57){
            val.push(exp[i]-48); //gives actual value of digit
        }else{ //not a digit
            if(ops.size()==0 || priority(exp[i])>priority(ops.top())){
                ops.push(exp[i]);
            }
            else{// val 1 op val 2
                while(ops.size()>0 && priority(exp[i])<=priority(ops.top())){
                    char op = ops.top();
                    ops.pop();
                    int val2 = val.top();
                    val.pop();
                    int val1 = val.top();
                    val.pop();
                    int ans = solve(val1,op,val2);
                    val.push(ans);
                }
                ops.push(exp[i]);
            }
        }
    }
    //operator stack can still have value
    while(ops.size()>0){
        char op = ops.top();
        ops.pop();
        int val2 = val.top();
        val.pop();
        int val1 = val.top();
        val.pop();
        int ans = solve(val1,op,val2);
        val.push(ans);
    }
    cout<<val.top();
}