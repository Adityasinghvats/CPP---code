#include<iostream>
using namespace std;
class Player{
public:
    int id;
    int score;
    string name;
    Player(int id,int score,string name){
        this->id = id;
        this->score = score;
        this->name = name;
    }
};
int main(){
    Player p1(1,250,"Kohli");
    Player* c1 = &p1;

    // {
    //     // These both are same
    //     cout<<(*c1).id<<endl;
    //     cout<<c1->id<<endl;
    // }

    (*c1).score = 150;
    cout<<c1->score<<endl;
    c1->score = 100;
    cout<<(*c1).score<<endl;
}