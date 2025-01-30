#include<iostream>
#include<queue>
// Known as BFS
using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val = val;
        this->left = nullptr;
        this->right = nullptr;
    }
};
void levelOrderQueue(Node *root){
    queue<Node*> q;
    q.push(root);
    while(q.size()>0){
        Node* temp = q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->left!=nullptr) q.push(temp->left);
        if(temp->right!=nullptr) q.push(temp->right);
    }
    cout<<endl;
}
void reverseOrderQueue(Node *root){
    queue<Node*> q;
    q.push(root);
    while(q.size()>0){
        Node* temp = q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->right!=nullptr) q.push(temp->right);
        if(temp->left!=nullptr) q.push(temp->left);
    }
    cout<<endl;
}
int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);
    Node* f = new Node(60);
    Node* g = new Node(70);
    a->left = b; a->right = c;
    b->left = d; b->right = e;
    c->left = f; c->right = g;

    // int start_level = 1, required_level = 3;
    // displaylevelorder(a,start_level, required_level);

    levelOrderQueue(a);
    reverseOrderQueue(a);
    return 0;
}