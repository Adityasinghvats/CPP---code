#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a character:";
    cin>>ch;
    int ascii_value = (int)ch;

    if((ascii_value>=65 && ascii_value<=90) || (ascii_value>=97 && ascii_value<=122)){
        if(ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch=='u' || ch=='U'){
            cout<<"It is vowel";
        }
       else{
            cout<<"It is a consonant";
        }
    }
    else{
        cout<<"Enter an alphabet to check";
    }
}