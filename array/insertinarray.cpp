#include<iostream>
using namespace std;
void insert(int array[],int idx,int size,int num){
    for(int i = size; i>=idx; i--){
        array[i+1] = array[i];
    }
    array[idx] = num;
    size++;
    cout<<"Elements of array:";
        for(int i = 0; i<size;i++){
        cout<<array[i]<<" ";
        }
        cout<<endl;
        cout<<"New size of array is:"<<size<<endl;

}
void deleteElement(int array[],int idx,int size){
    for(int i = idx; i<size; i++){
        array[i] = array[i+1];
    }
    size--;
    cout<<"Elements of array:";
        for(int i = 0; i<size;i++){
        cout<<array[i]<<" ";
        }
        cout<<endl;
        cout<<"New size of array is:"<<size<<endl;
}
int main(){
    int arr[100],idx,size,num;
    cout<<"Enter size of array:";
    cin>>size;
    if(size>100){
        cout<<"Exceedslimit"<<endl;
    }
    else{
        for(int i = 0; i<size;i++){
        cout<<"Enter "<<i+1<<" th number of array:";
        cin>>arr[i];
        }
        cout<<"Elements of array:";
        for(int i = 0; i<size;i++){
        cout<<arr[i]<<" ";
        }
        cout<<endl;
        int choice;
        cout<<"If you want to add press 1 or else to delete press 0:";
        cin>>choice;
        if(choice==1){
            cout<<"Enter the index where you want to enter the element:";
            cin>>idx;
            cout<<"Enter the element to enter:";
            cin>>num;
            insert(arr,idx,size,num);
        }else{
            cout<<"Enter the index where you want to delete the element:";
            cin>>idx;
            deleteElement(arr,idx,size);
        }
    }  
}