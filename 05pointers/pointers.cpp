#include <iostream>
using namespace std;
int main()
{
    int x = 10;
    int y = 20;
    int result;
    // Declaring the pointer variable
    int *ptrx,*ptry,*ptr_result;
    ptrx = &x;
    ptry = &y;
    ptr_result = &result;
    // Pointer is storing the adress and we are accessing the value
    cout << ptrx << "\n";
    // Using derefernce operator to access the value stored at ptr value
    cout << *ptrx << "\n";
    // Changing the stored at the address
    *ptrx = 25;
    cout << *ptrx<<"\n";
    *ptr_result = *ptrx + *ptry;
    cout<<ptr_result<<"\n";
    cout<<*ptr_result<<"\n"<<result;

}
