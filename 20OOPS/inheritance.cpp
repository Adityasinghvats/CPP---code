#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int rollNo;
    
    Student(string name,int rollNo){
        this->name = name;
        this->rollNo = rollNo;
    }
};
class Topper:public Student{
    public:
    int rank;
    Topper(string name,int rollNo,int rank):Student(name,rollNo){
        this->name = name;
        this->rollNo = rollNo;
        this->rank = rank;
    }

};
int main(){
    Student s1("Aditya",3);
    Topper t1("AdityaK",4,5);
    cout<<t1.rank;
}