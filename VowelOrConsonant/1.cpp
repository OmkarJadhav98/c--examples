/*=================================================================================================
Write a program to Check whether a character is a vowel or consonant using switch statement.
=================================================================================================*/
#include <iostream>

using namespace std;

int main()
{
    char character = 0;

    cout << "Enter a Single Character: \n";
    cin >> character;

    switch (character)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout << character << " is a vowel.\n";
            break;
        default:
            cout << character << " is a consonant.\n";
            break;

    }
    return 0;
}

