#include<iostream>
using namespace std;
// sr-> start row , sc->start column
int maze(int sr,int sc,int er,int ec){
    if(sr>er || sc>ec) return 0;
    if(sr==er && sc==ec) return 1; 
    int rightWays = maze(sr,sc+1,er,ec);
    int downWays = maze(sr+1,sc,er,ec);
    return rightWays+downWays;
}


// Using only 2 variables
int maze2(int er,int ec){
    if(er<0 || ec<0) return 0;
    if(er==0 && ec==0) return 1; 
    int rightWays = maze2(er,ec-1);
    int downWays = maze2(er-1,ec);
    return rightWays+downWays;
}
void printpath(int sr,int sc,int er,int ec,string s){
    if(sr>er || sc>ec) return;
    // destination reached
    if(sr==er && sc==ec){
        cout<<s<<endl;
        return;
    }
    // Rightways
    printpath(sr,sc+1,er,ec,s+"R-");
    // downways
    printpath(sr+1,sc,er,ec,s+"D-");
    return;
}
int main(){
    // For a 3 cross 3 array
    // cout<<maze(0,0,2,2);

    cout<<maze2(2,2);

    // To get path
    // printpath(0,0,1,1,"");
}