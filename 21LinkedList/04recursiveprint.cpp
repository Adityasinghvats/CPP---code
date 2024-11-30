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

// void display(Node *head){
//     if(head == NULL) return;
//     cout<<head->data<<" ";
//     display(head->next);
// }

void display(Node *head){//prints in reverse
    if(head == NULL) return;
    display(head->next);
    cout<<head->data<<" ";   
}

int main(){
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    a->next = b;
    b->next = c;
    c->next = d;
    display(a);
}