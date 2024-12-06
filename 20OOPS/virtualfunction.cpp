#include<iostream>
using namespace std;
class Player{
    public:
    int score;
    virtual void show(){
        cout<<"Inside player"<<endl;
    }
};

class Fav : public Player{
    public:
    int number;
    void show(){
        cout<<"Inside fav"<<endl;
    }
};

class C : public Fav{
    public:
    void show(){
        Player::show();
        Fav::show();
    }
};
int main(){
   Fav b;
   Player* a;
   a = new Fav;
   a->show();
   a = new C;
   a->show();
}
// It is form of runtime polymorphism
// at compile time variables are stored in stack along with inline functions
// bindings
// compile time binding of function calls
// on using 'virtual' keyword compiler will do runtime binding
// If parents method is virtual all other childs methods with same name become virtual
/*
Without virtual function 
sizeof(a) = 4
sizeof(b) = 4

With virtual function
sizeof(a) = 12
sizeof(b) = 12
Because it is storing a virtual pointer (vptr) which points to virtual table (vtable)
which store and bind virtual functions in each class;
vptr has size 8 , so size increase by 8
Each object of a class get it own vptr
*/