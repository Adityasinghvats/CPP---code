#include<iostream>
#include<queue>
#include<vector>

//find predecsssor and succcessor of a BST
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
Node* finfPredecessor(Node* root){
    if(root->left==nullptr) return nullptr;
    Node* pred = root->left;
    while(pred->right != nullptr){
        pred = pred->right;
    }
    return pred;
}
Node* finfSuccessor(Node* root){
    if(root->right==nullptr) return nullptr;
    Node* pred = root->right;
    while(pred->left != nullptr){
        pred = pred->left;
    }
    return pred;
}
int main(){
    vector<int> v = {10,5,20,2,8,15,25,INT_MIN,4,INT_MIN,INT_MIN,12,INT_MIN,INT_MIN,INT_MIN,INT_MIN}; //INT_MIN is used to represent NULL
    Node* root = createTree(v);
    Node* pred = finfPredecessor(root->left->right);
    cout<<pred->val<<endl;
    Node* succ = finfSuccessor(root->left->right);
    cout<<succ->val<<endl;
    return 0;
}