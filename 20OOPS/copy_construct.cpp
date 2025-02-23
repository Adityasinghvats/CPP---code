#include<bits/stdc++.h>
using namespace std;
class House{
    public:
    int price;
    string* name;
    House(int p, string n){
        price = p;
        name = new string(n);
    }
    House(const House& other){
        price = other.price;
        name = new string(*other.name);
    }
    ~House(){
        delete name;
    }
    void showDetails(){
        cout<< *(name) <<" sold for "<<price<<endl;
    }
};
int main(){
    House h1(45, "Arnayak");
    h1.showDetails();

    House h2 = h1;
    h2.showDetails();

    *h1.name = "Villa";
    h1.showDetails();

    h2.showDetails();
}