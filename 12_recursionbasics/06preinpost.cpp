#include<bits/stdc++.h>
using namespace std;
void pip(int n){
    if(n<1) return;
    cout<<"Pre:"<<n<<endl;
    pip(n-1);
    cout<<"In:"<<n<<endl;
    pip(n-1);
    cout<<"Post:"<<n<<endl;
}
int main(){
    pip(2);
}