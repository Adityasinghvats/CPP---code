// Sorted lexographically
#include<algorithm>
#include<iostream>
using namespace std;
int main(){
    // Ascii value order
    string str;
    getline(cin,str);
    cout<<str<<endl;
    sort(str.begin(),str.end());
    cout<<str;
}
