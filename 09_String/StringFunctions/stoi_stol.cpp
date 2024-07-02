#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string num = "123456";
    int x = stoi(num);
    cout<<x+1<<endl;

    int a = 1234567;
    string s = to_string(a);
    cout<<s<<endl;
}