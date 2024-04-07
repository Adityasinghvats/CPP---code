#include<iostream>
using namespace std;
int main(){
    bool ships[4][4] = {
        {0,0,1,0},
        {1,0,0,0},
        {0,0,0,0},
        {1,1,0,0}
    };
    // hits and noof turns are to be counted
    int hits = 0;
    int noOfTurns = 0;
    while(hits<4){
        int row,column;
        cout<<"Enter the coordinates:\n";
        cout<<"Enter the row between 0 and 3:\n";
        cin>>row;
        cout<<"Enter the column between 0 and 3:\n";
        cin>>column;
        if(ships[row][column]
        ){
            ships[row][column] = 0;
            hits++;
            cout<<"Hit!"<<4-hits<<"Hits left!\n\n";
        }else{
            cout<<"Misssed try again!";
        }
        noOfTurns++;
    }
   cout<<"You won!\n";
   cout<<"You won in "<<noOfTurns<<" turns";
}