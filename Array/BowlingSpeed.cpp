#include <iostream>
using namespace std;

int main() 
{
    int BowlingSpeed[6];
    int position = 0;

    while(position < 6) 
    {
        cout << "Please Enter bowling speed of a " << position+1 << " bowl: ";
        cin >> BowlingSpeed[position];
        position++;
    }

    cout << "================================\n";
    cout << "Speed of ball in a over are: \n";
    cout << "================================\n";

    position = 0;
    while(position < 6) 
    {
        cout << "Speed of " << position+1 << " ball = " << BowlingSpeed[position] << " kmph\n";
        position++;
    }

    return 0;
}
