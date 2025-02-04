#include<iostream>
#include<queue>
#include<vector>
//using level order traversal coonstruct a tree
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

void leftBoundary(Node *root){
    if(root==nullptr) return;
    //leafnode
    if(root->left==nullptr && root->right==nullptr) return;
    cout<<root->val<<" ";
    leftBoundary(root->left);
    if(root->left == nullptr) leftBoundary(root->right);
}
void leafNode(Node* root){
    if(root==nullptr) return;
    if(root->left==nullptr && root->right==nullptr) cout<<root->val<<" ";
    leafNode(root->left);
    leafNode(root->right);
}
void rightBoundary(Node* root){
    if(root==nullptr) return;
    //leafnode
    if(root->left==nullptr && root->right==nullptr) return;
    rightBoundary(root->right);
    if(root->right == nullptr) rightBoundary(root->left);
    cout<<root->val<<" ";
}
void boundaryTraversal(Node* root){
    leftBoundary(root);
    leafNode(root);
    rightBoundary(root->right);
}
Node* createTree(vector<int> &v){
    queue<Node*> q;
    Node* root = new Node(v[0]);
    q.push(root);
    int i = 1,j = 2;
    while(i<v.size()){
        Node* temp = q.front();
        q.pop();
        if(v[i]!=INT_MIN){//non null value
            temp->left = new Node(v[i]);
            q.push(temp->left);
        }else {//for null value or INT_MIN though by default it will have nullptr
            temp->left = nullptr;
        }
        if(v[j]!=INT_MIN && j<v.size()){//non null value
            temp->right = new Node(v[j]);
            q.push(temp->right);
        }
        else {//for null value or INT_MIN though by default it will have nullptr
            temp->right = nullptr;
        }
        i+=2;
        j+=2;
    }
    return root;
}
int main(){
    vector<int> v = {1,2,3,4,5,INT_MIN,6,INT_MIN,7,8,9,10,INT_MIN}; //INT_MIN is used to represent NULL
    Node* root = createTree(v);
    boundaryTraversal(root);
    return 0;
}