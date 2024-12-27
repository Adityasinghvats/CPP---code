#include<iostream>
using namespace std;

enum Seat{
    MIDDLE = 10,
    AISLE,
    WINDOW
};

int main(){
    enum Seat mySeat = MIDDLE;
    switch (mySeat)
    {
    case 10:
        cout<<"Middle";
        break;
    case 11:
        cout<<"Aisle";
        break;
    case 12:
        cout<<"Window";
        break;
    default:
        break;
    }
    // cout<<mySeat;
}