#include<iostream>
using namespace std;
void print(int num, int start){
    if(start>num) return;
   cout<<start<<endl;
   print(num,++start);
}
int main(){
    int n;
    cout<<"Enter the number n:"<<endl;
    cin>>n;
    int start = 1;
    print(n,start);
}