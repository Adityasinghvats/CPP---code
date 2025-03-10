#include<iostream>

using namespace std;

class MaxHeap{
    public:
    int idx;
    int arr[50];
    MaxHeap(){
        this->idx = 1;
    }

    int top(){
        if(idx == 1) {
            cout << "Heap is empty!" << endl;
            return -1;
        }
        return arr[1];
    }

    int size(){
        return idx-1;
    }

    void push(int val){
        if(idx >= 50) {
            cout << "Heap is full!" << endl;
            return;
        }
        arr[idx] = val;
        int i = idx;
        idx++;
        while(i!=1){
            //check with parent if it is greater
            if(arr[i] > arr[i/2]){
                swap(arr[i], arr[i/2]);
            }else break;
            i = i/2;
        }
    }

    int pop(){
        if(idx<1){
            cout << "Heap is empty!" << endl;
            return -1;
        }
        idx--;
        int top = arr[1];
        arr[1] = arr[idx];
        int i = 1;
        while(true){
            int left_child = (2*i);
            int right_child = (2*i) + 1;

            int n = size();
            if(left_child>n) break;
            if(right_child>n){
                if(arr[i]<arr[left_child]){
                    swap(arr[i],arr[left_child]);
                    i = left_child;   
                }
                break;
            }

            if(arr[left_child] > arr[right_child]){
                if(arr[i]<arr[left_child]){
                    swap(arr[i],arr[left_child]);
                    i = left_child;
                }else break;
            }else{
                if(arr[i]<arr[right_child]){
                    swap(arr[i],arr[right_child]);
                    i = right_child;
                }else break;
            }   
        }  
        return top;    
    }
    void print(){//print level order traversal of complete binary tree
        for(int i=1;i<idx;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    MaxHeap pq;
   
    pq.push(10);
    pq.push(20);
    cout<<"Top ele: "<<pq.top()<<endl;
    pq.push(11);
    pq.push(30);
    pq.push(40);
    pq.push(22);
    pq.push(4);
    pq.push(7);
    cout<<"Top ele: "<<pq.top()<<endl;
    cout<<pq.size()<<endl;
    pq.print();
    cout<<pq.pop()<<endl; 
    
    pq.print();
}