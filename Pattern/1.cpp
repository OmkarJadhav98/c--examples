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

    while (i <= rows) 
    {
        int j = rows - i;

        while (j > 0) 
        {
            cout << "    ";
            j--;
        }

        int k = 1;
        while (k <= i) 
        {
            cout << "*   ";
            k++;
        }

        cout << "\n";
        i++;
    }

    return 0;
}
