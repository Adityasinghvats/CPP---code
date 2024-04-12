#include<iostream>
#include<string>
#include<algorithm>
//  Objects of a class std:: stringgs in cpp
// used to represent sequence of chars
//  string name = "    "
// dynamically allocated
// different from char array
// slower than char array
using namespace std;
int main(){
    string str = "hello";
    // string str1("Kumar");
    // std::cout<<str<<str1;
    // string str;
    // getline(cin,str);
    // cout<<str<<endl;
    // reverse(begin ptr, end ptr)
    // reverse(str.begin(),str.end());
    // cout<<str;
    // substr(position,length)
    cout<<str.substr(0,3);

} 