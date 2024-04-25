/*====================================================
                    *
                *   *
            *   *   *
        *   *   *   *
    *   *   *   *   *
*   *   *   *   *   *
====================================================*/

#include <iostream>

using namespace std;

int main() 
{
    int rows = 6;
    int i = 1;

    for(;i <= rows; i++) 
    {
        int j = rows - i;

        for(; j > 0 ; j--) 
        {
            cout << "    ";
        }

        int k = 1;
        for(; k <= i; k++) 
        {
            cout << "*   ";
        }

        cout << "\n";
    }

    return 0;
}
