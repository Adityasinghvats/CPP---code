// Continous part of string within a limit given by  programme 
// For "abc" , "ba" is not a sub string as it is not in  order
#include<algorithm>
#include<iostream>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    // If length is not given it will take upto end
    cout<<str.substr(2)<<endl;
    // str.substr(start idx, length)
    cout<<str.substr(2,5)<<endl;
}