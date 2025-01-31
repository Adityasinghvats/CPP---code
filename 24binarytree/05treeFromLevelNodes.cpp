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
int main(){
    queue<Node*> q;
    vector<int> v = {1,2,3,4,5,INT_MIN,6,INT_MIN,INT_MIN,7,8,9,INT_MIN,INT_MIN,11}; //INT_MIN is used to represent NULL
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
    levelOrderQueue(root);
    return 0;
}