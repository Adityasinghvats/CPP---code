#include<iostream>
using namespace std;
int main(){
    // lambda are anonymous functions
    auto PrintValue = [](int num){
        cout<<"No of cups of tea is:"<<num<<" and kept on counter"<<endl;
    };
    PrintValue(10);

    string description = "Known as \"best\" tea";

    cout << description << endl;


}