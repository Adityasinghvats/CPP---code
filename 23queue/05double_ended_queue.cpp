#include<bits/stdc++.h>
/*
pop and push at both ends at TC 0(1)
Implement using doubly LL
*/
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
class Deque{
    public:
    Node *head;
    Node *tail;
    int size;
    Deque(){
        head = tail = NULL;
        size = 0;
    }
    void push_back(int val){
        Node *temp = new Node(val);
        if(size == 0) tail = head = temp;
        else{
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
        size++;
    }
    void push_front(int val){
        Node *temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
        size++; 
    }
    void pop_front(){
        if(size==0){
            cout<<"List is empty"<<endl;
            return;
        }
        head = head->next;
        head->prev = nullptr;
        size--;
    }
    void pop_back(){
        Node *temp = head;
        while(temp->next != tail){
            temp = temp->next;
        }
        temp->next = NULL;
        tail->prev = nullptr;
        tail = temp;
        size--;
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
    int length(){
        return size;
    }
};
int main(){
    Deque dq;
    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);
    dq.push_back(40);
    dq.push_back(50);
    dq.push_back(60);
    dq.display();
    dq.push_front(5);
    dq.display();
}