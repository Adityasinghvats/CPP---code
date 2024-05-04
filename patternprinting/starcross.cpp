#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the odd value of n: ";
    cin>>n;
   /*1 *       *
     2   *   *
     3     *
     4   *   *
     5 *       *
       1 2 3 4 5 */
    for(int i = 1; i <= n ; i++){
        for(int j = 1 ; j <= n ; j++){
            if(i==j || i+j == n+1){
                cout<<'*'<<" ";
               
            }else{
                cout<<"  ";
            }
        }
        cout<<"\n";
    }
    
    }
