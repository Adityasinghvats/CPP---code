#include<iostream>
using namespace std;
class Player{
public:
    int id;
    int score;
    string name;
    // This is used to give local reference
    // Player(int id,int score,string name){
    //     this->id = id;
    //     this->score = score;
    //     this->name = name;
    // }

    //Intialization list -> same thing but makes is shorter and useful in constructor overloading
    Player(int id,int score,string name):id(id),score(score),name(name) {
    }
    //copy constructor
    // Player(Player &a){

    // }
};
int main(){
   Player* p1 = new Player(123,123,"Aditya");
   Player p2 = {1,23,"Abhinav"};
   cout<<p2.score;
}