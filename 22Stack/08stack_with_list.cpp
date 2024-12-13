#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node *next;
    Node(int val):val(val){
        this->next = nullptr;
    }
};
class Stack{
    public:
    Node* head;
    Node* tail;
    int idx;
    Stack(){
        this->idx = -1;
        head = tail = nullptr;
    }
    void push(int val){
       Node *temp = new Node(val);
       if(idx==-1) head = tail = temp;
       else{
        tail->next = temp;
        tail = temp;
       }
       idx++; 
    }
    void pop(){
        Node* temp = head;
        while(temp->next != tail){
            temp = temp->next;
        }
        tail = temp;
        temp->next = nullptr;
    }
    int top(){
        return tail->val;
    }
    void display(){
        Node *temp = head;
        while(temp){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};
int main(){
    Stack st;
    st.push(10);
    st.push(11);
    st.push(12);
    st.push(13);
    st.push(14);
    st.push(15);
    st.display();
    st.pop();
    st.display();
    cout<<st.top()<<"\n";
}