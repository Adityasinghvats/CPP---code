#include<iostream>
#include<algorithm>
#include<sstream>
using namespace std;
int main(){
    string details = "Aditya is a student";
    stringstream str(details);
    string temp;
    // Take input of substring in temp one by one
    while(str>>temp){
        cout<<temp<<endl;
    }
    return 0;
}