#include<iostream>
#include<memory>
using namespace std;
/*
wrapper around raw pointer and they deallocate memory automatically
types - unique, shared, weak
*/
class Pointer{
    public:
    Pointer(){
        cout<<"Constructor invoked"<<endl;
    }
    ~Pointer(){
        cout<<"Destructor invoked"<<endl;
    }
};
int main(){
    // Unique Pointer
    // unique_ptr<int> unptr1 = make_unique<int>(25);
    // cout<<*unptr1<<endl;

    // unique_ptr<int> unptr2 = move(unptr1);
    // //unique pointer -> second pointer cannot store address to first pointer
    // // instead we can move ownership and previous owner becomes a nullptr
    // cout<<*unptr2<<endl;

    // {
    //     unique_ptr<Pointer> unptr = make_unique<Pointer> ();
    // }

    //shared pointer can be shared between different owners , it has count of all owners
    // shared_ptr<Pointer> shptr1 = make_shared<Pointer> ();
    // shared_ptr<Pointer> shptr2 = shptr1;
    // {// share pointer inside this scope will be deallocated after this scope ends
    //     shared_ptr<Pointer> shptr3 = shptr1;
    //     cout<<"Shared count: "<<shptr1.use_count()<<endl;
    // }
    // cout<<"Shared count: "<<shptr1.use_count()<<endl;

    //Weak pointer does not increase use_count on sharing ownership
    weak_ptr<int> wptr1;
    {
        shared_ptr<int> shptr1 = make_shared<int> (25);
        wptr1 = shptr1;
        //the memory of share_ptr was destroyed at end of this scope as 
        //weak_ptr doesnot keep its alive
    }
    system("pause>null");
}