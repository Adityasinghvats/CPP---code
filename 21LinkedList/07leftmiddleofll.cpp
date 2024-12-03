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
class Linkedlist{
    public:
    Node *head;
    Node *tail;
    int size;
    Linkedlist(){
        head = tail = NULL;
        size = 0;
    }
    void insert(int data){
        Node *temp = new Node(data);
        if(size == 0) tail = head = temp;
        else{
            tail->next = temp;
            tail = temp;
        }
        size++;
    }
    int leftmiddle(){
        Node *slow = head;
        Node *fast = head;
        while(fast->next->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow->data;
    }
};

int main(){
  Linkedlist ll;
  ll.insert(10);  
  ll.insert(20);  
  ll.insert(30);  
  ll.insert(40);  
  ll.insert(50);  
  ll.insert(60); 
  cout<<ll.leftmiddle();
}