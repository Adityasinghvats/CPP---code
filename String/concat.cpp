#include<iostream>
#include<string>
using namespace std;
int main(){
    string firstName = "Aditya";
    string lastName = " Kumar";
    string myName = firstName.append(lastName);/*Append is same as string concatenation*/
    cout<<myName<<"\nThe size of string is "<<myName.size();
    return 0;
}