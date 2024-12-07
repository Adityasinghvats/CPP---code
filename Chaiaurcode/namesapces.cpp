#include<iostream>
namespace first_ns
{
    void func(){
        std::cout<<"Inside first namespace"<<std::endl;
    }
    namespace nested_ns
    {
        void func(){
        std::cout<<"Inside nested namespace"<<std::endl;
        }
    } // namespace nested_ns
    
} // namespace first_ns
namespace second_ns
{
   void func(){
        std::cout<<"Inside first namespace"<<std::endl;
    }
    class Player{
        public:
        std::string name;
        Player(std::string name):name(name) {}
    };
} // namespace second_ns
int main(){
    first_ns::func();
    first_ns::nested_ns::func();
    second_ns::Player p1("Aditya");
    std::cout<<p1.name;
    return 0;
}
