#include<iostream>
#include<algorithm>
#include<numeric>
#include<iterator>
#include<string>
using namespace std;
struct Employee{
    int id;
    string name;
    double salary;
};

void display(const Employee& emp){
    cout<<"ID: "<<emp.id<<" ,Name: "<<emp.name<<" ,Salary: "<<emp.salary<<endl;
}