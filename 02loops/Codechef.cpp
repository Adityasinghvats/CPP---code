#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t = 0;
	int x,y;cin>>x>>y;
	while(x>=y){
	    if(x/y){
            x = x-y;
        }
	    t++;
	}
	cout<<t;
	return 0;
}