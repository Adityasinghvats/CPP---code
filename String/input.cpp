#include<iostream>
#include<string>
using namespace std;
int main(){
    string name;
    std::cout<<"Enter your name :";
    // cin>>name;TYpes only first string so we use getline()
    getline(cin,name);
    cout<<name;
    return 0;
}