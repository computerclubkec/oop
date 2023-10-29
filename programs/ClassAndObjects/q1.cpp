// WAP to access public data from main function.

#include <iostream>

// Class with public data member
class MyClass {
public:
    int publicData;
    
    MyClass() {   // Constructor to initialize the data member
        publicData = 10;
    }
};

int main() {
    MyClass obj;  // Creating object of MyClass
    
    // Accessing public data member directly using object
    std::cout << "Public data from MyClass: " << obj.publicData << std::endl;
    
    // Modifying the public data member
    obj.publicData = 20;
    std::cout << "Modified public data from MyClass: " << obj.publicData << std::endl;

    return 0;
}
