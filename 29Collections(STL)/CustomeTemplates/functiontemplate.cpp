#include<iostream>
using namespace std;

// Similar to generics in java and kotlin
template <typename T>T maxNum(T x,T y){
    return (x>y)?x:y;
}
int main(){
    cout<<maxNum<int>(4,5)<<endl;
    cout<<maxNum<double>(4.98,4.68)<<endl;
    cout<<maxNum<char>('w','x')<<endl;
}