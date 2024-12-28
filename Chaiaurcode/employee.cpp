#include<iostream>
#include<algorithm>
#include<numeric>
#include<iterator>
#include<string>
#include<vector>
using namespace std;
struct Employee{
    int id;
    string name;
    double salary;
};

void display(const Employee& emp){
    cout<<"ID: "<<emp.id<<" ,Name: "<<emp.name<<" ,Salary: "<<emp.salary<<endl;
}
int main(){
    vector<Employee> employees = {
        {1,"Aditya",20000},
        {2,"Aditya",10000},
        {3,"Aditya",55000},
        {4,"Aditya",9000},
        {5,"Aditya",21000}
    };

    sort(employees.begin(),employees.end(), [](
        const Employee& e1, const Employee& e2
    ){
        return e1.salary>e2.salary; 
    });
    for_each(employees.begin(),employees.end(),display);

    vector<Employee> high_earner;
    copy_if(employees.begin(),employees.end(), back_inserter(high_earner),[](
        const Employee& e
    ){
        return e.salary>20000;
    });
    cout<<" Employees with more salary than 20000 "<<endl;
    for_each(high_earner.begin(),high_earner.end(),display);

    //just like reduce or (as i call it prefix sum) we have accumulate in CPP
    double totalSalary = accumulate(employees.begin(),employees.end(), 0.0, [](
        double sum, const Employee& e
    ){
        return sum + e.salary;
    });

    double avergeSalary = totalSalary/employees.size();
    cout<<avergeSalary;

    auto highestPaid = max_element(employees.begin(),employees.end(), [](
        const Employee& e1, const Employee& e2
    ){
        return e1.salary>e2.salary;
    });
    
}