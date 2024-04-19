#include <iostream>
#include <string>

using namespace std:

int main() 
{
    string ticket[5] = {"Swargate to Karve Nagar", "Swargate to Bund Garden", "Swargate to Vanaj", "Swargate to Ram wadi", "Swargate to Chinchwad"};
    int ticketPrice[5] = {10, 15, 20, 25, 30};
    int Destination = 0;
    int i = 0;

    cout << "--------------------Welcome to the Pune-Metro Ticket Counter--------------------\n";

    while(i < 5) 
    {
        cout << "Please Enter " << i << " for " << ticket[i] << "\n";
        i++;
    }

    cout << "Please enter the number of the destination you want to reach: ";
    cin >> Destination;

    if(Destination >= 0 && Destination < 5) 
    {
        cout << "Ticket for " << ticket[Destination] << " is: " << ticketPrice[Destination] << " Rs\n";
    } 
    else 
    {
        cout << "Invalid input. Please enter a number between 0 and 4.\n";
    }

    return 0;
}
