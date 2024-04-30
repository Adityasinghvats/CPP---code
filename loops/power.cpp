#include<iostream>

int main(){
    int num;
    std::cout<<"enter a number:";
    std::cin>>num;
    int power;
    std::cout<<"enter power:";
    std::cin>>power;
    int value = 1;
    while(power>=1){
        value *= num;
        power--;
    }
    std::cout<<value;
}