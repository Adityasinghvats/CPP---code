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

    // Default constructor so that we can use manuaul way as well
    Player(){  
    }
    // Note:- Every class can have multiple constructors

    // Parametrized Constructor
    // Player(int id,int score,string name){
    //     this->id = id;
    //     this->name = name;
    //     this->score = score;
    // }        
};
int main(){
    // Amit is an object of class player
    Player Amit;
    Amit.id = 10;
    Amit.name = "Aman";
    cout<<"Enter the score for amit: ";
    cin>>Amit.score;
    cout<<Amit.score<<endl;
    // cout<<Amit.name;
    Amit.print("Aditya");

    // Player Aditya(1,23,"Aditya");    
}