#include<iostream>
using namespace std;
/*
In C++, the const keyword used in a member function declaration has a very specific purpose.
When you place const at the end of a member function,
it means that this function will not modify any member variables of the object.
Let's break down your example:
*/
class Player{
    private:
    int score = 0;
    public:
    Player(int score):score(score){}
    int getScore() const{ // This function cannot modify any member variables
        return score;
    }
    void setScore(int score){
        this->score = score;
    }
};
int main(){
    const Player* p1 = new Player(121); 
    //this object cannot use setter as it is const
    // and it cannot call non const method
    cout<<p1->getScore()<<endl;

    Player p2(100);
    p2.setScore(150);
    cout<<p2.getScore()<<endl;

    Player* p3 = new Player(1210);
    p3->setScore(199);
    cout<<p3->getScore()<<endl;
}