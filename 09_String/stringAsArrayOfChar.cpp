#include<iostream>
using namespace std;
int main(){
    char str[] = "abcdefghijk";


    // for(int i=0;str[i] != '\0';i++){
    //     cout<<str[i]<<" ";
    // }


    cout<<endl;
    cout<<str<<endl;

    // Update s single char in string
    // String is mutable in cpp but in Java it is not mutable
    str[3] = 'z';
    cout<<str<<endl;

}