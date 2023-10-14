// WAP to show reference variable

#include <iostream>
using namespace std;

int main() {
    int num = 5;
    int &ref = num;  // declaring a reference variable

    cout << "Value of num: " << num << endl;
    cout << "Value of ref: " << ref << endl;

    // Modifying the value using the reference variable
    ref = 10;

    cout << "Value of num after modification: " << num << endl;
    cout << "Value of ref after modification: " << ref << endl;

    return 0;
}
