#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int rollNo;
    
    Student(string name,int rollNo,int marks){
        this->name = name;
        this->rollNo = rollNo;
        this->marks = marks;
    }
    // Getters -> to access private memebers
    int getMarks(){
        return marks;
    }
    // Setters
    void setMarks(int marks){
        this->marks = marks;
    }
    private:
    int marks;
};
int main(){
    Student s1("Aditya",3,9);
    cout<<s1.getMarks()<<endl;
    s1.setMarks(24);
    cout<<s1.getMarks()<<endl;
}