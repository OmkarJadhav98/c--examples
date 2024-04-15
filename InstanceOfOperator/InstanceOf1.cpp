/*================================================================================================================================================
I can also use dynamic casting to check if an object is an instance of a specific class. 
Dynamic casting is a mechanism in C++ that checks the validity of a specific cast at runtime. 
It is specifically used for polymorphism, when you want to check whether a base class pointer or reference points to a specific derived class.
==================================================================================================================================================*/

#include <iostream>
using namespace std;

class Base {
public:
    virtual ~Base() {}
};

class Derived : public Base {
public:
    virtual ~Derived() {}
};

/*================================================================================================================================
In this code, dynamic_cast<Derived*>(base) will return nullptr because base is not an instance of Derived. 
On the other hand, dynamic_cast<Derived*>(derived) will return a valid pointer because derived is an instance of Derived.

Please note that dynamic casting only works with pointers or references to polymorphic types. 
A polymorphic type is a class that declares or inherits at least one virtual function.
================================================================================================================================*/

int main() 
{
    Base* base = new Base();
    Base* derived = new Derived();

    if(dynamic_cast<Derived*>(base))
        cout << "base is an instance of Derived\n";
    else
        cout << "base is not an instance of Derived\n";

    if(dynamic_cast<Derived*>(derived))
        cout << "derived is an instance of Derived\n";
    else
        cout << "derived is not an instance of Derived\n";

    delete base;
    delete derived;

    return 0;
}
