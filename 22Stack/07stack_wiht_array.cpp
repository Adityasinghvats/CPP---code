#include<bits/stdc++.h>
using namespace std;
class Stack{
    public:
    vector<int> v;
    int idx;
    Stack(){
        this->idx = -1;
    }
    ~Stack(){
        v.clear();
        cout<<"Destructor";
    }
    void push(int val){
        v.push_back(val);
        idx++;
    }
    void pop(){
        v.pop_back();
        idx--;
    }
    int top(){
        return v[idx]; 
    }
    int size(){
        return v.size(); 
    }
    void display(){
        for(int ele:v){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
};
int main(){
    Stack st;
    st.push(10);
    st.push(11);
    st.push(12);
    st.push(13);
    st.display();
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    cout<<st.size()<<endl;
}