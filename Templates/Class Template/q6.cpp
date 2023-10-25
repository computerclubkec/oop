// WAP to compare 2 values using a function template and display the largest value. Check your program for char, int, and float type data.

#include <iostream>
using namespace std;

// Function template to find the maximum of two values
template <class T>
T findMax(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    // Comparing two char values
    char char1 = 'a', char2 = 'z';
    cout << "Largest char: " << findMax(char1, char2) << endl;

    // Comparing two int values
    int int1 = 10, int2 = 20;
    cout << "Largest int: " << findMax(int1, int2) << endl;

    // Comparing two float values
    float float1 = 10.5, float2 = 5.5;
    cout << "Largest float: " << findMax(float1, float2) << endl;

    return 0;
}
