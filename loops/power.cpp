#include<iostream>

int main(){
    int num;
    std::cout<<"enter a number:";
    std::cin>>num;
    int power;
    std::cout<<"enter power:";
    std::cin>>power;


    bool flag = true;
    if(power<0){
        flag = false;
        power = -power;
    }


    float value = 1;

    for(int i =1;i<=power;i++){
        value = value*num;
    }

    if(flag==false){
        value = 1/value;
        power = -power;
    }
    std::cout<<value;
}