#include<iostream>
using namespace std;

//TreeNode
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
void displaypre(Node* root){
    if(root==nullptr) return;
    cout<<root->val<<" ";
    displaypre(root->left);
    displaypre(root->right);
}
void displayin(Node* root){
    if(root==nullptr) return;  
    displayin(root->left);
    cout<<root->val<<" ";
    displayin(root->right);
}
void displaypost(Node* root){
    if(root==nullptr) return;
    displaypost(root->left);
    displaypost(root->right);
    cout<<root->val<<" ";
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
    displaypre(a);
    cout<<endl;
    displayin(a);
    cout<<endl;
    displaypost(a);
}