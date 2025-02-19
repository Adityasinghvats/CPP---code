#include<bits/stdc++.h>
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
void topView(Node* root){
    unordered_map<int, int> mp; //<level, root->val>
    queue< pair<Node*,int> > q;
    q.push({root,0});
    //filling hashmap with unique levels
    while (q.size()>0)
    {
        Node* temp = q.front().first;
        int level = q.front().second;
        q.pop();
        if(mp.find(level) == mp.end()){
            mp[level] = temp->val;
        }
        //level increase in right and decrease in left
        if(temp->left) q.push({temp->left, level-1});
        if(temp->right) q.push({temp->right, level+1});
    }
    int minLevel = INT_MAX;
    int maxLevel = INT_MIN;
    for(auto x:mp){
        int level = x.first;
        minLevel = min(minLevel, level);
        maxLevel = max(maxLevel, level);
    }
    for(int i=minLevel;i<=maxLevel;i++){
        cout<<mp[i]<<" ";
    }
    cout<<endl;
    //4 2 1 3 6
}
int main(){
    vector<int> v = {1,2,3,4,5,INT_MIN,6,INT_MIN,INT_MIN,7,8}; //INT_MIN is used to represent NULL
    Node* root = createTree(v);
    levelOrderQueue(root);
    topView(root);
    return 0;
}
//Afterwards LC 138