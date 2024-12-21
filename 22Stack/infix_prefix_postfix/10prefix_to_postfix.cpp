#include<iostream>
#include<stack>
using namespace std;
string solve(char op,string v1,string v2){
    string s = "";
    s += v1;
    s += v2;
    s.push_back(op);
    return s;
}
int main(){
    string exp = "-/*+79483"; //5
    stack<string> val;
    for(int i=exp.length()-1;i>=0;i--){ // traverse from back
        if(exp[i]>=48 && exp[i]<=57){
            val.push(to_string(exp[i]-48)); //gives actual value of digit
        }else{ //on finding a operator simply perform the operation
            char op = exp[i];
            string val1 = val.top();
            val.pop();
            string val2 = val.top();
            val.pop();
            string ans = solve(op,val1,val2);
            val.push(ans);
       }
    }
    cout<<val.top();
}