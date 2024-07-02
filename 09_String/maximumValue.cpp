#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string arr[6] = {"0123","0023","456","00182","940","2901"};
    int max = 0;int maxidx = -1;
    for(int i=0;i<6;i++){
      int x = stoi(arr[i]);
      if(x>max){
        max=x;
        maxidx=i;
      }
    }
    // cout<<max<<" "<<maxidx<<endl;
    // Gives a int value on add or diff of char
    cout<<'Z'-'A';
}