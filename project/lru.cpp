#include<bits/stdc++.h>
using namespace std;

struct Node{
    string val;
    Node* left = nullptr;
    Node* right = nullptr;
};
struct Queue{
    Node* head = nullptr;
    Node* tail = nullptr;
    int length;
    void display(){
        Node* n = head->right;
        cout<<"[";
        while(n!= tail){
            cout<<n->val<<" -> ";
            n = n->right;
        }
        cout<<"]"<<"\n\n";
    }
};
typedef unordered_map<string, Node*> Hash;

struct Cache{
    Queue q;
    Hash h;
    void check(string word){
       //find word in map if it is there remove it and insert at front of queue
       if(h.find(word) != h.end()){
        //get the node from hash
        Node* n = h[word];
        remove(n);
        //add code
        add(n);
       }else{
        Node* n = new Node({word});
        add(n);
       }  
    }
    void add(Node* n){
        string word = n->val;
        cout<<"Inserting `"<<word<<"` to lru cache"<<endl;
        n->right = q.head->right;
        n->left = q.head;
        q.head->right = n;
        n->right->left = n;
        q.length++;
        h.insert({word, n});
        if(q.length > 5){
            cout<<"Cache full removing last element !!!"<<endl;
            remove(q.tail->left);
        }
    }
    Node* remove(Node* n){
        Node* l = n->left;
        Node* r = n->right;
        //remove
        l->right = r;
        r->left = l;
        q.length--;
        h.erase(n->val);
        return n;
    }
    void display(){
        q.display();
    }
};
Queue newQueue(){
    Node* head = new Node();
    Node* tail = new Node();
    tail->left = head;
    head->right = tail;
    return Queue({head, tail, 0});
}
Cache newCache(){
    Queue q = newQueue();
    Hash h;
    return Cache({q, h});
}

int main(){
    Cache cache = newCache();
    vector<string> v = {"parrot", "avocado", "tree", "potato", "tomato", "tree", "man", "monkey", "deer", "man"};
    for(string s: v){
        cache.check(s);
        cache.display();
    }
    return 0;
}