#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int rollNo;
    // void sound(){
    //     cout<<"HI"<<endl;
    // }
    virtual void sound(){
        cout<<"HI"<<endl;
    }
};
class Topper:public Student{
    public:
    int rank;
    void sound(){
        cout<<"HELLO"<<endl;
    }
};
class Losser:public Student{
    public:
    int rank;
    void sound(){
        cout<<"HOWAREYOU!"<<endl;
    }
};
int main(){
    Student* T1 = new Topper();
    T1->sound();
    Student* T2 = new Losser();
    T2->sound();
    vector<Student*> v;
    v.push_back(T1);
    v.push_back(T2);
}