/*====================================================

                                  *
                                *   *
                              *   *   *
                            *   *   *   *
                          *   *   *   *   *
                        *   *   *   *   *   *
                      *   *   *   *   *   *   *
                    *  *   *   *   *    *   *   *
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

    do
    {
        j = rows - i;
        do
        {
            cout << "  ";
            j--;
        }while(j >= 0);

        int k = 1;
        do
        {
            cout << "*   ";
            k++;
        }while (k <= i);

        cout << "\n";
        i++;

    }while(i <= rows);

    i = rows - 1;
    do
    {
        j = rows - i;
        do
        {
            cout << "  ";
            j--;
        }while (j >= 0);

        int k = 1;
        do 
        {
            cout << "*   ";
            k++;
        }while (k <= i);

        cout << "\n";
        i--;
    }while(i > 0);
     
}