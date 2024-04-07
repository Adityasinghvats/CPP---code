#include<iostream>
using namespace std;
int main(){
    int x = 10;
    cout<<"Size of x is "<<sizeof(x)<<"\n";
    int *p1 = &x;
    cout<<p1<<" "<<(p1+3)<<endl;
    double d = 10.20;
    cout<<"Size of d is "<<sizeof(d)<<"\n";
    double *p2 = &d;
    cout<<p2<<" "<<(p2+1)<<endl;

}