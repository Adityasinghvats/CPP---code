#include<bits/stdc++.h>
using namespace std;
class Fraction{
    public:
    int num;
    int den;
    Fraction(int num,int den){
        this->num = num;
        this->den = den;
    }
    void print(){
        cout<<num<<"/"<<den<<endl;
    }
    Fraction add(Fraction f){
        int num = this->num*f.den + f.num*this->den;
        int den = this->den*f.den;
        Fraction ans(num,den);
        return ans;
    }
    Fraction operator*(Fraction f){
        int num = this->num*f.num;
        int den = this->den*f.den;
        Fraction ans(num,den);
        return ans;
    }
};
int main(){
    Fraction f1(1,2);
    Fraction f2(1,3);
    f1.print();
    f2.print();
    Fraction f3 = f2.add(f1);
    f3.print();
    Fraction prod = f2 * f3;
    prod.print();
}