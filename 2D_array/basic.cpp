#include<iostream> 
#include<vector>
using namespace std;
int main(){
    vector<vector<int>> matrix;

    for(int i = 0;i<3; i++){

        vector<int> row;

        int index_value;
        for(int j =0; j<3; j++){
            cout<<"Enter the value for index "<<j+1<<" : ";
            cin>>index_value;
            row.push_back(index_value);
        }
        matrix.push_back(row);
    }

    for(int i=0; i<matrix.size(); i++){
        // size of each row of matrix with mtrx[0],mtrx[1],mtrx[2]
        for(int j = 0; j<matrix[i].size(); j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}