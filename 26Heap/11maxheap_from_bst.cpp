#include<bits/stdc++.h>
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

void revInorder(Node *root, vector<int> &dec){//make a decreasing inorder array
    if (root==nullptr) return;
    revInorder(root->right, dec);
    dec.push_back(root->val);
    revInorder(root->left, dec);
}

void printTree(Node *root){
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
//modify the to have preorde using the reverse sorted array
void preorder(Node *root, vector<int> &dec, int& i){
    if (root==nullptr) return;
    root->val = dec[i++];
    preorder(root->left, dec, i);
    preorder(root->right, dec, i);
}

int main(){
    Node* a = new Node(10);
    Node* b = new Node(5);
    Node* c = new Node(16);
    Node* d = new Node(1);
    Node* e = new Node(8);
    Node* f = new Node(12);
    Node* g = new Node(20);
    a->left = b; a->right = c;
    b->left = d; b->right = e;
    c->left = f; c->right = g;
    vector<int> dec;//reverse inorder
    revInorder(a, dec);
    cout<<"before converting to maxheap:"<<endl;
    printTree(a);
    int i = 0;
    preorder(a, dec, i);
    cout<<"after converting to maxheap:"<<endl;
    printTree(a);
    return 0;
}
/*
before converting to maxheap:
10 5 16 1 8 12 20 
after converting to maxheap:
20 16 8 12 10 5 1
 */