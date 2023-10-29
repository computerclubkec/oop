// WAP to access the data from the function outside the class.

#include <iostream>

class MyClass {
private:
    int privateData;

public:
    MyClass() : privateData(100) {}   // Constructor to initialize the data member

    // Public member function to access private data
    int getPrivateData() const {
        return privateData;
    }
    
    void setPrivateData(int value) {
        privateData = value;
    }
};

// Function outside the class that accesses the class data
void displayData(const MyClass& obj) {
    std::cout << "Data from MyClass: " << obj.getPrivateData() << std::endl;
}

int main() {
    MyClass instance;  // Creating an object of MyClass

    // Access and display the data using a function outside the class
    displayData(instance);
    
    // Modifying the data using setter
    instance.setPrivateData(200);
    displayData(instance);

    return 0;
}
