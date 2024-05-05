#include<iostream>
using namespace std;
int main(){
    char ch = 'A';
    int i = 65;
    if(i==ch) cout<<"PWskills"<<endl;
    else cout<<"PW"<<endl;

    cout<<(i>40)<<endl<<(i=70)<<endl<<(i>65)<<endl;

    if(3*5 % 15) cout<<"This works"<<endl;
    if(int a = 5) cout<<"This works as well"<<endl;
    if(-5) cout<<"This works suprisingly"<<endl;
    
    if(!(cout<<"Hello,")) cout<<"Come here";
        else cout<<"Dont come";
}