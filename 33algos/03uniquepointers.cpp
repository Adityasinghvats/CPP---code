#include<iostream>
#include<utility>

class MyClass{
public:
    int value;
    MyClass(int v) : value(v) {
        std::cout << "MyClass(" << value << ") constructed." << std::endl;
    }
    ~MyClass() {
        std::cout << "MyClass(" << value << ") destructed." << std::endl;
    }
    void doSomething() {
        std::cout << "MyClass(" << value << ") doing something." << std::endl;
    }
};

template <typename T>
class MyUniquePointer{
private:
    T* ptr; //raw pointer for us to manage

public:
    //1. take ownership of a raw pointer
    explicit MyUniquePointer(T* p=nullptr): ptr(p){}
    //2. deletes the owned pointer
    ~MyUniquePointer(){
        delete ptr;
        ptr = nullptr;
    }
    //3. delete copy constructor and copy assignmnent operator
    MyUniquePointer(const MyUniquePointer&) = delete;
    MyUniquePointer& operator=(const MyUniquePointer&) = delete;

    //4. Movable : Move constructor and move assigment operator

    //Move constructor - steals ptr from other and set other.ptr to nullptr
    MyUniquePointer(MyUniquePointer&& other) noexcept: ptr(other.ptr){
        other.ptr = nullptr; //Nullify the source
    }
    
    //Move assignment operator
    MyUniquePointer& operator=(MyUniquePointer&& other) noexcept{
        if(this != &other){//avoid self-assignment
            delete ptr; //Delete current resource
            ptr = other.ptr; //take ownership
            other.ptr = nullptr; //nullify source
        }
        return *this;
    }

    //5. dereferencing operator
    T& operator*() const{
        return *ptr;
    }
    T* operator->() const{
        return ptr;
    }

    //bool operator bool for checking if it holds a pointer
    explicit operator bool() const {
        return ptr != nullptr;
    }
};
int main(){
    //creat unqiue pointers
    MyUniquePointer<MyClass> ptr1(new MyClass(10));
    ptr1->doSomething();
    std::cout<<"Value via dereferencing: "<<(*ptr1).value<<std::endl;

    //move ownership 
    MyUniquePointer<MyClass> ptr2 = std::move(ptr1);
    //ptr1 is now null

    if(ptr1){
        std::cout<<"ptr1 stiil holds a pointer"<<std::endl;
    }else{
        std::cout<<"ptr1 is empty"<<std::endl;
    }
    return 0;
}