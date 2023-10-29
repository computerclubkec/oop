// WAP to show different type of constructor (default, parameterized and copy) and destructor.

#include <iostream>

class Box {
private:
    int length, breadth, height;

public:
    // Default constructor
    Box() {
        std::cout << "Default constructor called!" << std::endl;
        length = 0;
        breadth = 0;
        height = 0;
    }

    // Parameterized constructor
    Box(int l, int b, int h) {
        std::cout << "Parameterized constructor called!" << std::endl;
        length = l;
        breadth = b;
        height = h;
    }

    // Copy constructor
    Box(const Box &obj) {
        std::cout << "Copy constructor called!" << std::endl;
        length = obj.length;
        breadth = obj.breadth;
        height = obj.height;
    }

    // Destructor
    ~Box() {
        std::cout << "Destructor called for Box with dimensions: " 
                  << length << "x" << breadth << "x" << height << std::endl;
    }

    // Function to display dimensions
    void display() {
        std::cout << "Dimensions: " << length << "x" << breadth << "x" << height << std::endl;
    }
};

int main() {
    Box defaultBox;          // Calls default constructor
    Box paramBox(5, 6, 7);   // Calls parameterized constructor

    std::cout << "Details of defaultBox: ";
    defaultBox.display();

    std::cout << "Details of paramBox: ";
    paramBox.display();

    Box copyBox = paramBox;  // Calls copy constructor

    std::cout << "Details of copyBox: ";
    copyBox.display();

    // Objects go out of scope here, so destructors will be called
    return 0;
}
