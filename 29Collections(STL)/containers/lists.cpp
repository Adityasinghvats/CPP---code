// Same as vector but gives front operatons as well
#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int> ls;
    ls.push_back(1);
    ls.push_back(2);
    ls.push_back(3);

    ls.push_front(0);
    // {0,1,2,3}
    // To perform such operations in vector using insert we use more memory as it used doubly linked list
    // whereas list uses singly linked list
}