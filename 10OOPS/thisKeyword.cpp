#include<iostream>
using namespace std;
class Player{
public:
    int id;
    int score;
    string name;
    // This is used to give local reference
    Player(int id,int score,string name){
        this->id = id;
        this->score = score;
        this->name = name;
    }
};
int main(){

}