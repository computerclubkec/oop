// WAP to show function overloading

#include <iostream>
using namespace std;

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Function to add three integers
int add(int a, int b, int c) {
    return a + b + c;
}

int main() {
    int num1 = 5, num2 = 10, num3 = 15;
    cout << "Result of adding two numbers: " << add(num1, num2) << endl;
    cout << "Result of adding three numbers: " << add(num1, num2, num3) << endl;
    return 0;
}
