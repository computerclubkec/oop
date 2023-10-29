// WAP to access the data from the function inside the class.

#include <iostream>

class MyClass {
private:
    int data;

public:
    // Constructor to initialize the data member
    MyClass(int val) : data(val) {}

    // Member function to display the data
    void displayData() {
        std::cout << "Data: " << data << std::endl;
    }

    // Member function to modify the data
    void modifyData(int newValue) {
        data = newValue;
    }
};

int main() {
    MyClass obj(5);  // Creating an object of MyClass with initial data as 5

    obj.displayData();  // Display the initial data

    obj.modifyData(10); // Modify the data using member function
    obj.displayData();  // Display the modified data

    return 0;
}
