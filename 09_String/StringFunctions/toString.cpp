#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int x = 1234567;
    string s = to_string(x);
    cout<<s<<endl;
    // Retinr total no of digits in a number without using loops
    cout<<"Lenght of x is:"<<s.length();
    return 0;
}