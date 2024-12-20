/*
SOlve problem with array impplmentation of queue
Fully utilise the array
*/
#include<bits/stdc++.h>
using namespace std;
class MyCircularQueue {
public:
    int f;//front
    int b;//back
    int s;//size
    int c;//capacity
    vector<int> arr;
    MyCircularQueue(int k) {
        f = 0; b = 0; s = 0; c = k;
        vector<int> v(k);
        arr = v;
    }
    
    bool enQueue(int value) {
        if(s==c) return false;
        arr[b] = value;
        b++;
        if(b==c) b = 0;//in case back goes beyond capacity bring to front 
        s++;
        return true; 
    }
    
    bool deQueue() {
        if(s==0) return false;
        f++;
        if(f==c) f = 0;//imp
        s--;
        return true;
    }
    
    int Front() {
        if(s!=0) return arr[f]; else return -1;
    }
    
    int Rear() {
        if(s==0) return -1;
        if(b==0) return arr[c-1]; //imp
        else return arr[b-1];
    }
    
    bool isEmpty() {
        if(s==0) return true;
        else return false;
    }
    
    bool isFull() {
        if(s==c) return true;
        else return false;
    }
};
int main(){
    MyCircularQueue* mq = new MyCircularQueue(5);
}
