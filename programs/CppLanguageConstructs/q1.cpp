// WAP to add and subtract two numbers

#include <iostream>

using namespace std;

int main(){
    int first_num, second_num, add_result, sub_result;
    cout << "Enter first number: ";
    cin >> first_num;
    cout << "Enter second number: ";
    cin >> second_num;  

    add_result = first_num + second_num;
    sub_result = first_num - second_num;


    cout << "Result: " << endl;
    cout << first_num << " + " << second_num << " = " << add_result << endl;
    cout << first_num << " - " << second_num << " = " << sub_result << endl;
    return 0;
}