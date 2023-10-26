#include <iostream>

// Base class (Parent)
class Parent {
public:
    Parent() {
        parent_attribute = "I am the parent";
    }

    void parent_method() {
        std::cout << "This is a method from the Parent class" << std::endl;
    }

protected:
    std::string parent_attribute;
};

// Derived class (Child)
class Child : public Parent {
public:
    void child_method() {
        std::cout << "This is a method from the Child class" << std::endl;
    }
};

int main() {
    // Create an instance of the Child class
    Child child_object;

    // Access attributes and methods of both Parent and Child classes
    std::cout << child_object.parent_attribute << std::endl;  // Accessing the attribute from the Parent class
    child_object.parent_method();  // Calling a method from the Parent class
    child_object.child_method();   // Calling a method from the Child class

    return 0;
}
