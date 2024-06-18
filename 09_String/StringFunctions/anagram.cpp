// Where all the letters of a string are also present in other string
// Find by sorting bot strings then compare#include<algorithm>
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s = "aditya";
    string t = "atiday";
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s==t) cout<<"Anagram";
    else cout<<"Not";
}