#include<iostream>
using namespace std;

class Node{ // LL node
    public:
    int data;
    Node *next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

int main(){
    Node a(10), b(20), c(30), d(40);
    a.next = &b;
    b.next = &c;
    c.next = &d;
    
    //cout<<(*a.next).data<<" ";//print value of b wihtout using b
    // cout<<(a.next)->data;

    //cout<<(((a.next)->next)->next)->data;//data of d only using a;

    //print 1
    Node temp = a;
    while(1){
        cout<<temp.data<<" ";
        if(temp.next == NULL) break;
        temp = *(temp.next);
    }
}