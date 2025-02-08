#include<iostream>
#include<queue>
#include<vector>

//find predecsssor and succcessor of a BST
// pred or successor can have at max 1 child node
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
Node* findPredecessor(Node* root){
    if(root->left==nullptr) return nullptr;
    Node* pred = root->left;
    while(pred->right != nullptr){
        pred = pred->right;
    }
    return pred;
}
Node* findSuccessor(Node* root){
    if(root->right==nullptr) return nullptr;
    Node* suc = root->right;
    while(suc->left != nullptr){
        suc = suc->left;
    }
    return suc;
}
int main(){
    vector<int> v = {10,5,20,2,8,15,25,INT_MIN,4,INT_MIN,INT_MIN,12,INT_MIN,INT_MIN,INT_MIN,INT_MIN}; //INT_MIN is used to represent NULL
    Node* root = createTree(v);
    Node* pred = findPredecessor(root);
    cout<<pred->val<<endl;
    Node* succ = findSuccessor(root);
    cout<<succ->val<<endl;
    return 0;
}