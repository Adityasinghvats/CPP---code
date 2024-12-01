#include<iostream>
using namespace std;
class Node{
    public:
    Node* next;
    int data;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};
class Linkedlist{
    public:
    Node *head;
    Node *tail;
    int size;
    Linkedlist(){
        head = tail = NULL;
        size = 0;
    }
    void insertAtEnd(int val){
        Node *temp = new Node(val);
        if(size == 0) tail = head = temp;
        else{
            tail->next = temp;
            tail = temp;
        }
        size++;
    }
    void insertAtStart(int val){
        Node *temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            temp->next = head;
            head = temp;
        }
        size++; 
    }
    void insertAt(int val, int idx){
        if(idx==0) insertAtStart(val);
        else if(idx==size-1) insertAtEnd(val);
        else if(idx<0 || idx>size) cout<<"Index out of bound"<<endl;
        else{
           Node *t = new Node(val);
           Node *temp = head;
           for(int i=0;i<idx;i++){
            temp = temp->next;
           }
           t->next = temp->next;
           temp->next = t;
           size++; 
        }
    }
    int getAtIndex(int idx){
        if(idx==0) return head->data;
        else if(idx == size-1) return tail->data;
        else if(idx<0 || idx>=size) {
            cout<<"Index out of bound"<<endl;
            return -1;
        }
        else{
            Node* temp = head;
            for(int i=0;i<idx;i++){
                temp = temp->next;
            }
            return temp->data;
        }
    }
    void display(){
        Node *temp = head;
        if(temp  == NULL) cout<<"Linkedlist is empty!";
        while(temp != NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};
int main(){
    Linkedlist ll;
    ll.display();
    ll.insertAtEnd(10);
    ll.insertAtEnd(12);
    ll.insertAtEnd(90);
    ll.insertAtEnd(34);
    ll.insertAtStart(43);
    ll.insertAt(99,3);
    ll.display();
    // cout<<ll.size;
    cout<<ll.getAtIndex(4);
}