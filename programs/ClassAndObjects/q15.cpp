// WAP to show returning object by normal way and also with nameless object.

#include <iostream>

// Class definition for Alpha
class Alpha {
    int value; // Private member variable

public:
    // Constructor to initialize the member variable
    Alpha(int v) : value(v) {}

    // Member function to display the value
    void display() {
        std::cout << "Value: " << value << std::endl;
    }
};

// Function that returns a Alpha object normally
Alpha createObjectNormal(int v) {
    Alpha obj(v); // Create an object
    return obj;     // Return the object
}

// Function that returns a Alpha object using a nameless (temporary) object
Alpha createObjectNameless(int v) { 
    return Alpha(v); // Directly return a nameless object
}

int main() {
    // Using normal object return
    Alpha obj1 = createObjectNormal(10); // Store the returned object
    obj1.display(); // Display the value

    // Using nameless object return
    Alpha obj2 = createObjectNameless(20); // Store the returned object
    obj2.display(); // Display the value

    return 0;
}
