#include<bits/stdc++.h>
using namespace std;
class SumOf{
    public:
    void sum(int a,int b){
        cout<<a+b<<endl;
    }
    void sum(double a,double b,double c){
        cout<<a+b+c<<endl;
    }
};
int main(){
    SumOf s1;
    s1.sum(4,5);
    s1.sum(9.45,6.54,6.39);
}