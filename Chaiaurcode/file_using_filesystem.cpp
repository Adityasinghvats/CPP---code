#include<iostream>
#include<fstream>
#include<string>
#include<filesystem>
namespace fs = std::filesystem;
using namespace std;
int main(){
    fstream file("example.txt");
    if(file){
        file<<"Hello from new compiler";
    }else{
        cerr<<"Couldn't create file"<<endl;
    }

    //check is file exist
    if(fs::exists("example.txt")){
        cout<<"File exists"<<endl;
    }

    //read file
    if(file){
        string line;
        while(getline(file,line)){
            cout<<line<<endl;
        }
    }

    //delete file
    // if(fs::remove("example.txt")){
    //     cout<<"file deleted";
    // }
}