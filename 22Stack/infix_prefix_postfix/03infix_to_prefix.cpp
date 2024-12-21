#include<iostream>
//infix to prefix
#include<stack>
using namespace std;
int priority(char ch){
    if(ch=='+' || ch=='-') return 1; else return 2; //for * and /
}
string solve(char op,string v1,string v2){
    string s = "";
    s.push_back(op);
    s += v1;
    s += v2;
    return s;
}
int main(){
    string exp = "(7+9)*4/8-3"; // -/*+79483
    //we need 2 stacks one for val 2 for operator
    stack<string> val;
    stack<char> ops;
    for(int i=0;i<exp.length();i++){
        //check if number or not
        if(exp[i]>=48 && exp[i]<=57){
            val.push(to_string(exp[i]-48)); //gives actual value of digit
        }else{ //not a digit

            if(ops.size()==0){
                ops.push(exp[i]);
            }
            // for brackets
            else if(exp[i]=='(') ops.push(exp[i]);
            else if(ops.top()=='(') ops.push(exp[i]);
            else if(exp[i]==')'){
                while(ops.size()>0 && ops.top()!='('){
                    char op = ops.top();
                    ops.pop();
                    string val2 = val.top();
                    val.pop();
                    string val1 = val.top();
                    val.pop();
                    string ans = solve(op,val1,val2);
                    val.push(ans);
                }
                ops.pop();//pop opening bracket
            }
            
            else if(priority(exp[i])>priority(ops.top())) ops.push(exp[i]);
            else{// val 1 op val 2
                while(ops.size()>0 && priority(exp[i])<=priority(ops.top())){
                    char op = ops.top();
                    ops.pop();
                    string val2 = val.top();
                    val.pop();
                    string val1 = val.top();
                    val.pop();
                    string ans = solve(op,val1,val2);
                    val.push(ans);
                }
                ops.push(exp[i]); //phle ka operation ho gaya to present wala op push kr do
            }
        }
    }
    //operator stack can still have value
    while(ops.size()>0){
        char op = ops.top();
        ops.pop();
        string val2 = val.top();
        val.pop();
        string val1 = val.top();
        val.pop();
        string ans = solve(op,val1,val2);
        val.push(ans);
    }
    cout<<val.top();
}