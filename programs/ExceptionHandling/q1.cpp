// WAP to show simple try catch throw.

#include <iostream>

using namespace std;

int main() {
    try {
        int number;
        cout << "Enter a number: ";
        cin >> number;

        if (number < 0) {
            throw "Negative Number Error";
        } else {
            cout << "The number is: " << number << endl;
        }
    } catch (const char* error) {
        cout << "Error: " << error << endl;
    }
    return 0;
}

