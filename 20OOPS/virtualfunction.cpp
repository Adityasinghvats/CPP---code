#include<iostream>
using namespace std;
class Player{
public:
    int score;
    Player(int score):score(score) {
    }
    virtual void show(){
    cout<<score;
    }
};
class Fav:public Player{
public:
void show(){
    cout<<score;
}
}
int main(){
   Fav b;
   Player* a;
   a = &b;
   a.show();
}