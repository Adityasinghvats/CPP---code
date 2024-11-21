#include<bits/stdc++.h>
using namespace std;
class Vector{
    public:
    int size;
    int capacity;
    int* arr;
    // Default constructor
    Vector(){
        // We can intialise the attributes in the default constuctor
        size = 0;
        capacity = 1;
        arr = new int[1];
    }
    void add(int ele){
        if(size==capacity){
            capacity *= 2;
            // Creating a new array of double the capacity
            int* arr2 = new int[capacity];
            // Copying all ele of previous array
            for(int i=0;i<size;i++){
                arr2[i] = arr[i];
            }
            arr = arr2;
        }
        arr[size++] = ele;
    }
    void pop(){
        if(size==0) return;
        else{
            size--;
        }
    }
    void print(){
    for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    Vector v;
    v.add(2);
    v.add(4);
    cout<<v.size<<" "<<v.capacity<<endl;
    v.add(10);
    v.print();
    cout<<v.size<<" "<<v.capacity<<endl;
    v.add(24);
    v.add(45);
    cout<<v.size<<" "<<v.capacity<<endl;
    v.print();
    v.pop();
    v.print();
}