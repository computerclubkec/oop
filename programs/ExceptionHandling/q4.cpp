// WAP to show catching all exceptions.

#include <iostream>

using namespace std;

int main() {
    try {
        int numerator, denominator;
        cout << "Enter the numerator: ";
        cin >> numerator;
        cout << "Enter the denominator: ";
        cin >> denominator;

        if (denominator == 0) {
            throw "Division by zero error";
        } else if (numerator < 0 || denominator < 0) {
            throw "Negative number error";
        } else {
            cout << "Result: " << numerator / denominator << endl;
        }
    } catch (...) {
        cout << "Some exception occurred" << endl;
    }
    return 0;
}

