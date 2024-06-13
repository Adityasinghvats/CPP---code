#include<iostream>
#include<algorithm>
int main(){
    std::string str = "hello";
    std::reverse(str.begin(),str.end());
    std::cout<<str<<std::endl;
}