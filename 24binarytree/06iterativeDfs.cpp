#include<iostream>
#include<stack>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
//using iteration implement dfs algos
//recursuve methods use recursive stack
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
    vector<int> ans;
    stack<Node*> st;
    st.push(root);
    while(st.size()>0){
        Node* temp = st.top();
        st.pop();
        ans.push_back(temp->val);
        if(temp->right) st.push(temp->right);
        if(temp->left) st.push(temp->left);
    }
    for(int ele:ans){
        cout<<ele<<" ";
    }
}
void displayin(Node* root){
    vector<int> ans;
    stack<Node*> st;
    Node* node = root;
    while(st.size()>0 || node){ 
        if(node){
            st.push(node);
            node = node->left;
        }else{
            Node* temp = st.top();
            st.pop();
            ans.push_back(temp->val);
            node = temp->right;
        }
    }
    for(int ele:ans){
        cout<<ele<<" ";
    }
}
void displaypost(Node* root){
    vector<int> ans;
    stack<Node*> st;
    st.push(root);
    while(st.size()>0){
        Node* temp = st.top();
        st.pop();
        ans.push_back(temp->val);
        if(temp->left) st.push(temp->left);
        if(temp->right) st.push(temp->right);
    }
    reverse(ans.begin(),ans.end());
    for(int ele:ans){
        cout<<ele<<" ";
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
    displaypre(a);
    cout<<endl;
    displayin(a);
    cout<<endl;
    displaypost(a);
}
/*
10 20 40 50 30 60 70 
40 20 50 10 60 30 70
40 50 20 60 70 30 10
*/