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

    do 
    {
        int j = rows - i;

        do 
        {
            cout << "    ";
            j--;
        }while (j >= 0);

        int k = 1;
        do 
        {
            cout << "*   ";
            k++;
        }while (k <= i);

        cout << "\n";
        i++;
    }while (i <= rows);

    return 0;
}
