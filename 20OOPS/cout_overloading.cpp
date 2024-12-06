#include<iostream>
using namespace std;
class Player{
    private:
    int id;
    string name;
    public:
    Player(int id, string name):id(id),name(name){}
    friend ostream& operator << (ostream &os, Player &p);
};
ostream& operator<<(ostream &os, Player &p){
    os << "Name: " << p.name << ", Age: " << p.id;
    return os;
}
int main(){
    Player p(1,"Aditya Kumar");
    cout<<p<<endl;
}