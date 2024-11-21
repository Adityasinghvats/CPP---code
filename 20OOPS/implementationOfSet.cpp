#include<bits/stdc++.h>
using namespace std;
int search(int arr[],int size,int trgt){
    int lo = 0;
    int hi = size-1;
    while(lo<=hi){
        int mid = lo+(hi-lo)/2;
        if(arr[mid]==trgt) return 1;
        if(arr[mid]<trgt) lo = mid+1;
        if(arr[mid]>trgt) hi = mid-1;
    }
    return 0;
}
class Set{
    public:
    int size;
    int capacity;
    int* arr;
    Set(){
       size = 0;
       capacity = 1;
       arr = new int[1]; 
    }
    void add(int element){
        if(search(arr,size,element)==1){
            cout<<"Cannot insert "<<element<<" because, it is not unique."<<endl;
            return;
        }else{
            if(size==capacity){
                capacity *= 2;
                int *arr2 = new int[capacity];
                for(int i=0;i<size;i++){
                    arr2[i] = arr[i];
                }
                arr = arr2;
            }
            arr[size++] = element;
            cout<<"Inserted: "<<element<<endl;
        } 
    }
    void print(){
        cout<<"Set is:"<<endl;
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    Set s1;
    s1.add(2);
    s1.add(3);
    s1.add(5);
    s1.add(2);
    s1.add(6);
    s1.add(9);
    s1.print();
}