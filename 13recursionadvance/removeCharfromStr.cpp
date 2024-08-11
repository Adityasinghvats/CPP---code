#include<bits/stdc++.h>
using namespace std;
int main(){
    string name = "Aditya Kumar";
    string str ="";
    for(int i = 0;i<name.length();i++){
        if(name[i] !=  'a' && name[i] !=  'A') str += name[i];
    }
    cout<<str;
}