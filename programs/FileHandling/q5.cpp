// WAP to show use of manipulators.

#include <iostream>
#include <iomanip>  // Required for manipulators like setw, setprecision, etc.

int main() {
    int number = 12345;
    double pi = 3.141592653589793;

    std::cout << "Without setw:" << std::endl;
    std::cout << number << std::endl;
    std::cout << pi << std::endl;

    std::cout << "\nWith setw:" << std::endl;
    std::cout << std::setw(10) << number << std::endl;  // Right aligns the number with a width of 10
    std::cout << std::setw(10) << pi << std::endl;      // Right aligns the value of pi with a width of 10

    std::cout << "\nWith setprecision:" << std::endl;
    std::cout << std::setprecision(5) << pi << std::endl; // Displays pi with a total of 5 digits
    std::cout << std::setprecision(9) << pi << std::endl; // Displays pi with a total of 9 digits

    std::cout << "\nWith fixed and setprecision:" << std::endl;
    std::cout << std::fixed << std::setprecision(2) << pi << std::endl; // Displays pi with exactly 2 digits after the decimal point

    std::cout << "\nWith showpos:" << std::endl;
    std::cout << std::showpos << number << std::endl;  // Displays the positive sign before positive numbers

    return 0;
}
