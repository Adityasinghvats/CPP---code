#include<iostream>
using namespace std;
/*
Abstraction is used to hide implementation details
abstraction is achieved through pure virtual functions / abstractions class in C++
interface in java / kotlin 

Cannot create a object of abstract class without overriding the pure virtual function

Pure abstract class has all pure virtual functions
Abstract class has atleast one virtual function
*/
class Player{
    public:
    virtual void show() = 0;
};
class Fav : public Player{
    public:
    int jerseyNo;
    Fav(int no):jerseyNo(no){}
    void show() override{
        cout<<jerseyNo<<endl;
    }
};
int main(){
    Fav* p1 = new Fav(10);
    p1->show();
    p1->jerseyNo = 20;
    p1->show();
    return 0;
}