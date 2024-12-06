#include<vector>
#include<iostream>
using namespace std;
// vectors are dynamic arrays increase or decrease with need
// declaration
void newdec(){
    vector<int> arr {1,2,3,4,5};
    for(int i:arr){
        cout<<i<<" ";
    }
    cout<<endl;
}
int main(){
    newdec();
    vector<int> first(5);
    // vector<datatype> name(size optional)
    // size
    cout<<first.size()<<"\n";
    cout<<first.capacity()<<"\n";
    // resize to certain needed length
    first.resize(8);
    cout<<first.size()<<"\n";
    // capacity>=size (cpacity increases with power of 2 i.e 1,2,4,8,16)
    cout<<first.capacity()<<"\n";
    // Add elements
    first.push_back(5);
    cout<<first.size();
    // v.insert(position,element) for inserting element at any postion
    // v.begin()
    // v.end() psition of start and end
    first.insert(first.begin()+2,6);
    // To remove last element
    first.pop_back();
    // to remove elemet v.erase(position) position relative to first or last element
    first.erase(first.end()-2);
    // to dlt entire vector 
    // range of elements
    first.erase(first.begin()+1 , first.end()-2);
    // one more is there called erase-remove idiom learn it later on
    }