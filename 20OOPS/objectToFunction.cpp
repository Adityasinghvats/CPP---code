#include<iostream>
using namespace std;
class Player{
    public:
    int id;
    int score;
    string name;
};
void print(Player p){
    cout<<p.id<<" "<<p.name<<" "<<p.score<<endl;
}
// It is pass by value as the value is not change in original object
// void change(Player p){
//     p.name = "Messi";
//     cout<<"Inside function:"<<p.name<<endl;
// }

// Pass by reference    
void change(Player &p){
    p.name = "Messi";
    cout<<"Inside function: "<<p.name<<endl;
}
int main(){
    Player p1;
    p1.id = 1;
    p1.name = "Ronaldo";
    p1.score = 10;

    Player p2;
    p2.id = 2;
    p2.name = "Ronaldo";
    p2.score = 12;

    Player p3;
    p3.id = 3;
    p3.name = "Ronaldo";
    p3.score = 30;

    print(p1);
    print(p2);
    print(p3);

    change(p2);
    cout<<"Outside function: "<<p2.name<<endl;

    // Examples for copy constructor
    Player p4 = p1;
    // It is a kind of deep copy
    p4.name = "Dhoni";
    print(p4);

    Player p5(p2);
    print(p5);
}