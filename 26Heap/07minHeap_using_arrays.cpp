#include<iostream>

using namespace std;

class MinHeap{
    public:
    int idx;
    int arr[50];
    MinHeap(){
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
            //check with parent if it is smaller
            if(arr[i] < arr[i/2]){
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
        //check for left and right child if anyone is smaller replace it with the parent
        while(true){
            int left_child = (2*i);
            int right_child = (2*i) + 1;

            int n = size();
            //in case child indexes are out of size, there is no element at those indexes
            if(left_child>n) break;
            if(right_child>n){
                if(arr[i]>arr[left_child]){
                    swap(arr[i],arr[left_child]);
                    i = left_child;   
                }
                break;
            }

            //choose the min value child among left and right and swap it with the parent
            if(arr[left_child] < arr[right_child]){
                if(arr[i]>arr[left_child]){
                    swap(arr[i],arr[left_child]);
                    i = left_child;
                }else break;
            }else{
                if(arr[i]>arr[right_child]){
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
    MinHeap pq;
   
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