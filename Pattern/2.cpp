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

        // Print spaces
        while (j > 0) 
        {
            cout << "  ";
            j--;
        }

        // Print stars
        int k = 1;
        while (k <= i) 
        {
            cout << "*   ";
            k++;
        }

        printf("\n");
        i++;
    }

    return 0;
}
