// Explain all constructor with and display appropriate message when object goes out of scope.

#include <iostream>

class Sample {
public:
    // Default constructor
    Sample() {
        std::cout << "Default constructor called!" << std::endl;
    }

    // Parameterized constructor
    Sample(int x) {
        std::cout << "Parameterized constructor called with value: " << x << std::endl;
    }

    // Copy constructor
    Sample(const Sample& obj) {
        std::cout << "Copy constructor called!" << std::endl;
    }

    // Destructor
    ~Sample() {
        std::cout << "Destructor called! Object goes out of scope." << std::endl;
    }
};

int main() {
    std::cout << "Inside main function:" << std::endl;
    {
        Sample obj1;           // Calls default constructor
        Sample obj2(10);       // Calls parameterized constructor

        Sample obj3 = obj2;    // Calls copy constructor
    } // As we reach the end of this block, the destructors for obj3, obj2, and obj1 are called (in that order)

    std::cout << "Exiting main function." << std::endl;

    return 0;
}
