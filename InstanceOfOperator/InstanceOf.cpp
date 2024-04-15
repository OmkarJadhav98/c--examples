/*================================================================================================================================
In C++, I can use typeid from the typeinfo library to get the type of a variable, but it’s not exactly the same as instanceof. 
The typeid operator gives us the type of the variable at compile time, not at runtime. 
So it won’t work for checking if an object is an instance of a subclass
==================================================================================================================================*/


#include <iostream>
#include <typeinfo>

using namespace std;

int main() 
{
    string city = "Pune";
    int length = 20;
    double temp = 35.5;

    if (typeid(city).name() == typeid(string).name())
        cout << "This type of city is String\n";
    else
        cout << "This type of city is Not String\n";

    if (typeid(length).name() == typeid(int).name())
        cout << "This type of length is Integer\n";
    else
        cout << "This type of length is Not Integer\n";

    if (typeid(temp).name() == typeid(double).name())
        cout << "This type of temp is Double\n";
    else
        cout << "This type of temp is Not Double\n";

    return 0;
}
