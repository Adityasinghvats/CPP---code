#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a character:";
    cin>>ch;
    int ascii_value = (int)ch;

    // if(ascii_value>=65 && ascii_value<=90 ||ascii_value>=97 && ascii_value<=122){}
    
    if(ascii_value>=65 && ascii_value<=90 ){
        cout<<"UpperCase Alphabet";
    }

    else if(ascii_value>=97 && ascii_value<=122){
        cout<<"LowerCase Alphabet";
    }

    else{
        cout<<"Not a albhabet";
    }
}