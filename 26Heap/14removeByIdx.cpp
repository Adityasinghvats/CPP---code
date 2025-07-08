#include<bits/stdc++.h>
using namespace std;
void deleteByIndex(vector<int>& heap, size_t index){
    if(index >= heap.size()) return;
    heap.erase(heap.begin()+index);
    //remake heap
    make_heap(heap.begin(), heap.end());
}
int main(){
    vector<int> heap = {10,20,30,40,50};
    make_heap(heap.begin(), heap.end());

    cout<<"Before deletion: "<<"\n";
    for(auto ele:heap){
        cout<<ele<<" ";
    }
    deleteByIndex(heap, 2);
    cout<<"\n";
    cout<<"After deletion: "<<"\n";
    for(auto ele:heap){
        cout<<ele<<" ";
    }
    return 0;
}