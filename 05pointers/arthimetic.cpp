 #include<iostream>
using namespace std;
int main(){
    // int x = 10;
    // cout<<"Size of x is "<<sizeof(x)<<"\n";
    // int *p1 = &x;
    // cout<<p1<<" "<<(p1+3)<<endl;
    // double d = 10.20;
    // cout<<"Size of d is "<<sizeof(d)<<"\n";
    // double *p2 = &d;
    // cout<<p2<<" "<<(p2+1)<<endl;
    // bool flag = true;
    // bool *ptr = &flag;
    // cout<<ptr<<"\n"<<(ptr+2);

    int x=4;
    int *ptr=&x;
    cout<<ptr<<endl;
    // ptr = ptr+1;
    // // print garbage values ,kyunki 4 bytes baad koi number nhi hain
    // cout<<*ptr<<endl;
    cout<<*ptr<<endl;
    (*ptr)++;
    cout<<*ptr;
}