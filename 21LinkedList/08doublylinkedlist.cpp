#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* prev;
    Node* next;
    Node (int val){
        this->val = val;
        this->prev = nullptr;
        this->next = nullptr;
    }
};
int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    a->next = b;
    b->next = c; b->prev = a;
    c->next = d; c->prev = b;
    d->prev = c;
    Node *temp = d;
    while(temp){
        cout<<temp->val<<" ";
        temp = temp->prev;
    }
    return 0;
}