/*====================================================

                                  *
                                *   *
                              *   *   *
                            *   *   *   *
                          *   *   *   *   *
                        *   *   *   *   *   *
                      *   *   *   *   *   *   *
                     *  *   *   *   *   *   *   *
                      *   *   *   *   *   *   *
                        *   *   *   *   *   *
                          *   *   *   *   *
                            *   *   *   *
                              *   *   *
                                *   *
                                  *

====================================================*/

#include <iostream>

using namespace std;

int main()
{
    int rows = 8;

    int i = 1;
    int j = 0;

    while(i <= rows)
    {
        j = rows - i;
        while(j > 0)
        {
            cout << "  ";
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

    i = rows - 1;
    while(i > 0)
    {
        j = rows - i;
        while (j > 0)
        {
            cout << "  ";
            j--;
        }
        int k = 1;
        while (k <= i) 
        {
            cout << "*   ";
            k++;
        }

        cout << "\n";
        i--;
    }
     
}