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
    // int* ptr = new int(456);
    // cout<<*ptr<<endl;

    Player* p1 = new Player(1,234,"Aditya");
    cout<<p1->id<<" "<<p1->name<<" "<<p1->score<<endl;
}