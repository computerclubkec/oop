// WAP to prnit the name of students by creating a student class. If no name is passed while creating and object of the student clas, then the name should be "unknown" otherwise the name should be equal to the string value passed while creating object of the student class.

#include <iostream>
#include <string>

class Student {
private:
    std::string name;

public:
    // Default constructor: assigns "unknown" to the name
    Student() : name("unknown") {}

    // Parameterized constructor: assigns the passed string to the name
    Student(const std::string &n) : name(n) {}

    // Function to display the name
    void display() {
        std::cout << "Student Name: " << name << std::endl;
    }
};

int main() {
    // Creating an object without passing a name
    Student student1;

    // Creating an object with a name
    Student student2("John Doe");

    // Displaying names
    student1.display();
    student2.display();

    return 0;
}
