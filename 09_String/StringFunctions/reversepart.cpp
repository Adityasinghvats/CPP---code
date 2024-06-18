#include<algorithm>
#include<iostream>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    cout<<str<<endl;
    int n = str.length();
    reverse(str.begin(),str.begin()+n/2);
    cout<<str;
}