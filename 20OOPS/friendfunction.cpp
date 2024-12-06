/*
child can access protected , main func can access public but friend can access private as well.
*/
#include<iostream>
using namespace std;
class Player{
    int id = 10;
    string name = "Aditya";
    public:
    friend void show(Player &P);
    friend class Fav;
};
void show(Player &P){
    cout<<P.id<<endl;
}
class Fav{
    public:
    void showName(Player &P){
        cout<<P.name<<endl;
    }
};
int main(){
    Player p1;
    show(p1);
    Fav p2;
    p2.showName(p1);
}