#include<iostream>
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
void displayLevelOrder(Node *root, int curr, int level){
    if(root==nullptr) return;
    // when current level becomes the required level
    if(curr==level) {
        cout<<root->val<<" ";
        return; //optimisation
    }
    // we cannot use increment operator as it increase the valueof curr
    // but we need to only pass the incremented value to the next function call
    displayLevelOrder(root->left, curr+1, level);
    displayLevelOrder(root->right, curr+1, level);
}
void displayReverseLevelOrder(Node* root,int curr, int level){
    if(root==nullptr) return;
    if(curr==level) {
        cout<<root->val<<" ";
        return; //optimisation
    }
    displayReverseLevelOrder(root->right,curr+1, level);
    displayReverseLevelOrder(root->left,curr+1,level);
}
int level(Node *root){
    if(root==nullptr) return 0;
    int level_size = 1 + max(level(root->left),level(root->right));
    return level_size;
}
void levelOrder(Node *root){
    int n = level(root);
    for(int i=1;i<=n;i++){
        cout<<"Nodes at level "<<i<<" are: ";
        displayLevelOrder(root,1,i);
        cout<<"\n";
    }
    for(int i=1;i<=n;i++){
        cout<<"Nodes at level "<<i<<" are: ";
        displayReverseLevelOrder(root,1,i);
        cout<<"\n";
    }
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

    levelOrder(a);
    return 0;
}