#include<iostream>
using namespace std;
class Player{
public:
    static int id; //this belong to class
    int score;
    string name;

    //same thing but makes is shorter and useful in constructor overloading
    Player(int score,string name):score(score),name(name) {
    }
    //static methods will only access static members
    static void getId(){
        id++;
    }
};
int Player::id = 0; //scope resolution
int main(){
   Player* p1 = new Player(123,"Aditya");
   Player* p2 = new Player(123,"Aditya");
//    cout<<p2->id;
    p1->getId();
    cout<<p1->id<<endl;
    cout<<p2->id<<endl;
    
    p2->getId();
    cout<<p1->id<<endl;
    cout<<p2->id<<endl;

    Player::getId();
    cout<<p1->id<<endl;
    cout<<p2->id<<endl;
}