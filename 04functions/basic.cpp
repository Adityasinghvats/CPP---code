#include<iostream>
using namespace std;
// int add(int num1, int num2){
//     return num1+num2;
// }
// int main(){
//     int num1,num2;
//     cin>>num1>>num2;
//     cout<<add(num1,num2)<<endl;
// }
void changeValue(int &z){
    z = 100;
    return;
}
int main(){
    int a = 10;
    int &p = a;/*& = Ambersand variable used to store address*/
    cout<<a<<"\n"<<endl;
    p++;
    cout<<p<<"\n";
    cout<<&a<<"\n"<<&p<<"\n";
    changeValue(a);
    cout<<a;
}