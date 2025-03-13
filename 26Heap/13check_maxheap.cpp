#include<bits/stdc++.h>
using namespace std;
/*
Check whether the binary tree is a maxheap or not
*/
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
bool ismax(Node *root){
    if(root==nullptr) return true;
    if(root->left && root->val<root->left->val) return false;
    if(root->right && root->val<root->right->val) return false;
    return ismax(root->left) && ismax(root->right);
}
bool iscbt(Node* root){
    if(root==nullptr) return true;
    //if either child is null
    if(root->left==nullptr and root->right) return false;
    if(root->left and root->right==nullptr) return false;
    return iscbt(root->left) && iscbt(root->right);
}

int main(){
    Node* a = new Node(20);
    Node* b = new Node(15);
    Node* c = new Node(10);
    Node* d = new Node(8);
    Node* e = new Node(11);
    // Node* f = nullptr; //with this it is not maxheap
    Node* f = new Node(4); //with this it is a maxheap
    Node* g = new Node(6);
    a->left = b; a->right = c;
    b->left = d; b->right = e;
    c->left = f; c->right = g;
    // cout<<iscbt(a);
    // cout<<ismax(a);
    if(ismax(a) && iscbt(a)) cout<<"Binary tree is a maxheap"<<endl;
    else cout<<"Binary tree is not a maxheap"<<endl;
    return 0;
}