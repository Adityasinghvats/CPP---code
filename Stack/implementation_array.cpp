#include<iostream>
using namespace std;
class stack{
        int data[100];
        int top;
    };
init(stack *stk){
    stk->top=-1;
}
int main(){
   stack stk;
   init(&stk);
}