#include<iostream>
using namespace std;
int main(){
    auto PrintValue = [](int num){
        cout<<"No of cups of tea is:"<<num<<" and kept on counter";
    };
    PrintValue(10);
    // PrintValue();
}