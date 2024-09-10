#include<iostream>
using namespace std;
class Player{
    public:
    int id;
    int score;
    string name;
    // Method
    void print(string name){
        cout<<name;
    }
    // Constructor
    Player(int id,int score,string name){
        this->id = id;
        this->name = name;
        this->score = score;
    }
};
int main(){
    Player Amit;
    Amit.id = 10;
    Amit.name = "Aman";
    // cout<<Amit.name;
    Amit.print("Aditya");

    Player Aditya(1,23,"Aditya");    
}