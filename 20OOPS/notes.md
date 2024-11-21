### Pointer 

    // Define a pointer to a member function of Base 
    void (Base::*funcPtr)() = &Base::foo; 
    Base obj; 
    // Call the member function using the object and the pointer
    (obj.*funcPtr)();

---

### In C++, polymorphism allows a base class pointer to refer to objects of derived classes.

    Base* b;
    Derived d; 
    b = &d; 
    b->show