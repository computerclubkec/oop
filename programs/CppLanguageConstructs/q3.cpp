// WAP to add and subtract two numbers using function and display result from main

#include <iostream>
using namespace std;

int add_numbers(int a, int b) {
    return a + b;
}

int subtract_numbers(int a, int b) {
    return a - b;
}

int main() {
    int first_num, second_num;
    cout << "Enter first number: ";
    cin >> first_num;
    cout << "Enter second number: ";
    cin >> second_num;  

    int add_result = add_numbers(first_num, second_num);
    int sub_result = subtract_numbers(first_num, second_num);

    cout << "Result: " << endl;
    cout << first_num << " + " << second_num << " = " << add_result << endl;
    cout << first_num << " - " << second_num << " = " << sub_result << endl;
    
    return 0;
}
