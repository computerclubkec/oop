// WAP to compute square root of a number. The input value must be tested for validity.
//  if it is negative an exception must be raised.

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float num;
    cout << "Enter a number: ";
    cin >> num;

    try
    {
        if (num < 0)
            throw float();
        else
        {
            cout << "Square Root of " << num << " is: " << sqrt(num) << endl;
        }
    }
    catch (float)
    {
        cout << "Negative Number Error" << endl;
    }
};