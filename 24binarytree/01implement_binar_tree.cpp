#include<iostream>
using namespace std;
#define MOD 1000000000 + 7;
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
void display(Node* root){
    if(root==nullptr) return;
    cout<<root->val<<endl;
    display(root->left);
    display(root->right);
}
int sum_of_nodes(Node* root){
    if(root==nullptr) return 0;
    int sum = root->val + sum_of_nodes(root->left) + sum_of_nodes(root->right);
    return sum;
}
int product(Node *root){
    if(root==nullptr) return 1;
    int prod = root->val * product(root->left) * product(root->right);
    return prod % MOD;
}
int no_of_nodes(Node *root){
    if(root==nullptr) return 0;
    int size = 1 + no_of_nodes(root->left) + no_of_nodes(root->right);
    return size;
}
int maxNode(Node *root){
    if(root==nullptr) return INT_MIN; 
    // to make sure we get the max value
    // when comparing wiht -ve no as well
    // to compare 3 values
    int max_node = max(root->val,max(maxNode(root->left),maxNode(root->right)));
    return max_node;
}
int level(Node *root){
    if(root==nullptr) return 0;
    int level_size = 1 + max(level(root->left),level(root->right));
    return level_size;
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
    // display(a);
    // cout<<sum_of_nodes(a);
    // cout<<no_of_nodes(a);
    // cout<<product(a);
    // cout<<maxNode(a);
    cout<<level(a);
}