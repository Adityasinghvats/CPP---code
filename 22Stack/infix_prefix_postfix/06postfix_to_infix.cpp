#include<iostream>
#include<stack>
using namespace std;
string solve(char op,string v1,string v2){
    string s = "";
    s += v1;
    s.push_back(op);
    s += v2;
    return s;
}
int main(){
    string exp = "79+4*8/3-"; //5
    stack<string> val;
    for(int i=0;i<exp.length();i++){
        if(exp[i]>=48 && exp[i]<=57){
            val.push(to_string(exp[i]-48)); //gives actual value of digit
        }else{ //on finding a operator simply perform the operation
            char op = exp[i];
            string val2 = val.top();
            val.pop();
            string val1 = val.top();
            val.pop();
            string ans = solve(op,val1,val2);
            val.push(ans);
       }
    }
    cout<<val.top();
}