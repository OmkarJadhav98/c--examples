#include <iostream>

using namespace std;

int main() 
{
    int No1 = 0;
    int No2 = 0;
    int result = 0;

    cout << "Please enter first value:\n";
    cin >> No1;

    cout << "Please enter second value:\n";
    cin >> No2;

    result = No1 | No2;
    cout << "bitwise OR result: " << result << "\n";

    return 0;
}
