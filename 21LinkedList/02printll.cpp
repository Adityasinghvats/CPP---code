#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

int main(){
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    a->next = b;
    b->next = c;
    c->next = d;
    //print
    Node *temp = a;
    while(temp != NULL){
        cout<<"|"<<temp->data<<"|"<<temp->next<<"|"<<"->  ";
        temp = temp->next;
    }
    cout<<endl;
    cout<<a->next->next->next->data;
}