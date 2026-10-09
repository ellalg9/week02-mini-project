#include <iostream>
using namespace std;

/*
Ella Goldman, Rachel Hsu
This code converts a temperature given in C to F
and a temperature given in F to C.
*/

int main()
{
    int temp;
    char unit;
    int newtemp;
    cout << "Please enter a temperature value: ";
    cin >> temp;
    cout << "Is the temperature in C or F?: ";
    cin >> unit;

    if (unit == 'C')
    {
        newtemp = (temp * 9 / 5) + 32;
        cout << "Temperature in F: " << newtemp << endl;
    }
    else if (unit == 'F')
    {
        newtemp = (temp - 32) * 5 / 9;
        cout << "Temperature in C: " << newtemp << endl;
    }
    else
    {
        cout << "Invalid input" << endl;
    }
    
    return 0;
}