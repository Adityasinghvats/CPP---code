#include<iostream>
using namespace std;
void find(int num,int *first, int *last){
    *last = num%10;
    
    while(num>9){
        num /= 10;
    }
    *first = num;
}
int main(){
    int num = 456739;
    int firstdigit,lastdigit;
    int *first = &firstdigit;
    int *last = &lastdigit;
    find(num,first,last);
    cout<<firstdigit<<" "<<lastdigit;
    
}