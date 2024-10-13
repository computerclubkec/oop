// WAP to show passing single argument as an object.

#include <iostream>

// Class definition for Alpha
class Alpha {
    int a; // Private member variable to store an integer

public:
    // Constructor to initialize the member variable
    Alpha(int num) : a(num) {}

    // Member function to display the value of 'a'
    void display() {
        std::cout << "The value is: " << a << std::endl;
    }
};

// Function that takes an Alpha object as an argument
void printer(Alpha obj) {
    obj.display(); // Call the display function of the passed object
}

int main() {
    Alpha o(10); // Create an Alpha object 'o' with value 10

    printer(o); // Pass the object 'o' to the printer function
}

