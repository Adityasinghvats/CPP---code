#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m = 9;
     vector<vector<int>> generate; 
        for(int i=1;i<=m;i++){
                vector<int> a(i);
                generate.push_back(a);
                }
            for(int i=0;i<m;i++){
                
                for(int j=0;j<i+1;j++){
                    
                    if(j==0 || i==j){
                        generate[i][j] = 1;
                    }
                    else{
                        generate[i][j] = generate[i-1][j] + generate[i-1][j-1];
                    }
                }
            }
            for(int i=0;i<m;i++){
                    for(int k=0;k<m-i;k++){
                    cout<<" ";
                }
                for(int j=0;j<i+1;j++){
                    cout<<generate[i][j]<<" ";
                }
                cout<<endl;
            }
}
   