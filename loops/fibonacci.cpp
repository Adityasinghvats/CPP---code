#include<iostream>
using namespace std;
int main(){
    int term = 5;
    int first = 0;
    int second = 1;
    int next;
    for(int i = 0; i<term; i++){
        next = first + second;
        first = second;
        second = next;
    }
    cout<<next;
}