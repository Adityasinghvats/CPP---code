#include<iostream>
using namespace std;
// problems unused or extra use of memory 
// when frnt pointer reaches certain index
// after pop() we cannot access prev elements in correct order
class Queue{
    int arr[100],frnt,bck;
    public:
    Queue(){frnt = bck = 0;}
    void push(int val){
        if(bck>99){
            cerr<<"Overflow";
            return;
        } 
        arr[bck] = val; bck++;
    }
    void pop(){ if(frnt<bck) frnt++; }
    int front(){ if(size()!=0) return arr[frnt]; else return -1; }
    int back(){ if(size()!=0) return arr[bck-1]; else return -1; }
    int size(){ return bck-frnt; }
    bool empty(){ if(size()==0) return true; else return false;}
    void display(){
        for(int i=frnt;i<bck;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    q.display();
    q.pop();
    q.pop();
    cout<<q.front()<<endl;
    cout<<q.size()<<endl;
}
/*
More efficient method can be using LinkedList using
head as front and tail as back and using everything 
just like a linkedlist
Advantage above array implementation
unlimited size
Efficient use of space
Constant time complexity
Use delete() whenever deleting a node
*/