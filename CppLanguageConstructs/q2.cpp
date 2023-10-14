// WAP to add and subtract two numbers using function and display result inside function

#include <iostream>
using namespace std;

void add_numbers(int a, int b) {
    int result = a + b;
    cout << "The sum of " << a << " and " << b << " is " << result << endl;
}

void subtract_numbers(int a, int b) {
    int result = a - b;
    cout << "The difference between " << a << " and " << b << " is " << result << endl;
}

int main() {
    int first_num, second_num, add_result, sub_result;
    cout << "Enter first number: ";
    cin >> first_num;
    cout << "Enter second number: ";
    cin >> second_num;  

    add_numbers(first_num, second_num);
    subtract_numbers(first_num, second_num);
    
    return 0;
}
