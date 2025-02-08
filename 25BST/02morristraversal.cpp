#include<iostream>
#include<queue>
#include<vector>

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

vector<int> MorrisTreaversal(Node* root){
    vector<int> ans;
        Node* curr = root;
        while(curr != nullptr){
            if(curr->left != nullptr){
                Node* pred = curr->left;
                //find predecessor
                while(pred->right && pred->right != curr){
                    //take it to predecessor of root and now connect it to the curr which is at root
                    pred = pred->right;
                }
                if(pred->right == nullptr){
                    pred->right = curr;//farzi connection to root
                    curr = curr->left;//move current to left of root
                }
                else{//pred->right == curr
                    //farzi link to ab tood do
                    pred->right = nullptr;
                    //visit curr
                    ans.push_back(curr->val);
                    curr = curr->right;
                }
            }
            else{
                //when curr reaches last ele in left most part
                //visit curr
                ans.push_back(curr->val);
                curr = curr->right; //bring back curr to prev node using frazi connection created 
            }
        }
        return ans;
}

int main(){
    vector<int> v = {10,5,20,2,8,15,25,INT_MIN,4,INT_MIN,INT_MIN,12,INT_MIN,INT_MIN,INT_MIN,INT_MIN}; //INT_MIN is used to represent NULL
    Node *root = createTree(v);
    vector<int> ans = MorrisTreaversal(root);
    for(int ele:ans){
        cout<<ele<<" ";
    }
    return 0;
}