#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    fstream myFile;
    
    // myFile.open("file1.txt",ios::out); //write mode
    // //each time we use ouput mode it will override previous files
    // if(myFile.is_open()){
    //     myFile<<"Hello\n";
    //     myFile<<"This is second line\n";
    //     myFile.close();
    // }

    // myFile.open("file1.txt",ios::app); //append mode
    // if(myFile.is_open()){
    //     myFile<<"Hello from Aditya\n";
    //     myFile.close();
    // }

    myFile.open("file1.txt",ios::in); //read
    if(myFile.is_open()){
        string line;
        while(getline(myFile, line)){ //here getline reads a line from myFile and stores into string line
            cout<<line<<"\n";
        }
        myFile.close();
    }
}
/*
fstream has 3 data types
fstream -> for writing & reading into files
ofstream -> for writing only
ifstream -> for reading only

ios modes
ios::in -> to read
ios::out -> write mode
ios::binary -> opens in binary mode
ios::app -> append mode
ios::ate -> opens file and move the control to end of the file
ios::trunc -> removes data from existing file
ios::nocreate -> only open file if it already exists
ios::noreplace -> opens file only if it doesnot exist

We can combine modes by using | 
myfile.open("file.txt",ios::in | ios::out);
*/