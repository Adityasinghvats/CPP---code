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
            temp->prev = tail;
            tail = temp;
        }
        size++;
    }
    void insertAtStart(int val){
        Node *temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            temp->next = head;
            head->prev = temp;
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
           for(int i=1;i<=idx-1;i++){
            temp = temp->next;
           }
           t->next = temp->next;
           temp->next = t;
           t->prev = temp;
           t->next->prev = t;
           size++; 
        }
    }
    int getAtIndex(int idx){
        if(idx==0) return head->val;
        else if(idx == size-1) return tail->val;
        else if(idx<0 || idx>=size) {
            cout<<"Index out of bound"<<endl;
            return -1;
        }
        else{
            Node* temp = head;
            for(int i=0;i<idx;i++){
                temp = temp->next;
            }
            return temp->val;
        }
    }
    void deleteAtHead(){
        if(size==0){
            cout<<"List is empty"<<endl;
            return;
        }
        head = head->next;
        head->prev = nullptr;
        size--;
    }
    void deleteAtTail(){
        Node *temp = head;
        while(temp->next != tail){
            temp = temp->next;
        }
        temp->next = NULL;
        tail->prev = nullptr;
        tail = temp;
        size--;
    }
    void deleteAtIndex(int idx){
        if(size==0){
            cout<<"List is empty"<<endl;
            return;
        }
        else if(idx==0) return deleteAtHead();
        else if(idx == size-1) return deleteAtTail();
        else if(idx<0 || idx>=size) {
            cout<<"Index out of bound"<<endl;
            return;
        }else{
            Node *temp = head;
            for(int i=1;i<=idx-1;i++){
                temp = temp->next;
            }
            temp->next = temp->next->next; //skip the node to be deleted
            temp->next->next->prev->prev = temp;
            size--;
        }
    }
    void display(){
        Node *temp = head;
        if(temp  == NULL) cout<<"Linkedlist is empty!";
        while(temp != NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
    void displayrev(){
        Node *temp = tail;
        if(temp  == NULL) cout<<"Linkedlist is empty!";
        while(temp != NULL){
            cout<<temp->val<<" ";
            temp = temp->prev;
        }
        cout<<endl;
    }
};
int main(){
    Linkedlist dll;
    dll.insertAtEnd(10);
    dll.insertAtEnd(20);
    dll.insertAtEnd(30);
    dll.insertAtEnd(40);
    dll.insertAtEnd(50);
    // dll.displayrev();
    // cout<<dll.getAtIndex(3)<<endl;
    // dll.deleteAtHead();
    // dll.deleteAtTail();
    dll.display();
    dll.deleteAtIndex(1);
    dll.display();
}