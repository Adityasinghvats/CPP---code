// Generate binary string of lenght n without any consecutive 1.
#include<iostream>
using namespace std;
void generate(string s, int n){
    if (s.length()==n){
        cout<<s<<endl;
        return;
    }
    generate(s+"0",n);
    if(s.length()==0 || s[s.length()-1]=='0') generate(s+"1",n);
    // Call to add 1 is possible only if last char is not 1
}
int main(){
    int n = 2;
    generate("",n);
}