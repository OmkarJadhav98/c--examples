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

        // Print spaces
        do 
        {
            cout << "  ";
            j--;
        }while (j >= 0);

        // Print stars
        int k = 1;
        do 
        {
            cout << "*   ";
            k++;
        }while (k <= i);

        printf("\n");
        i++;
    }while (i <= rows);

    return 0;
}
