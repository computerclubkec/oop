// WAP to create a class student. Ask user to enter name and marks obtained in 5 different subjects. The program should print the name and total marks obtained by students.

#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    int marks[5];
    int totalMarks;

public:
    // Constructor
    Student() : totalMarks(0) {}

    // Method to get student details
    void getDetails() {
        std::cout << "Enter student's name: ";
        std::getline(std::cin, name);

        std::cout << "Enter marks obtained in 5 subjects:" << std::endl;
        for (int i = 0; i < 5; ++i) {
            std::cout << "Subject " << (i + 1) << ": ";
            std::cin >> marks[i];
            totalMarks += marks[i];
        }
    }

    // Method to display student details
    void displayDetails() {
        std::cout << "\nStudent Name: " << name << std::endl;
        std::cout << "Total Marks Obtained: " << totalMarks << "/500" << std::endl;
    }
};

int main() {
    Student student;
    student.getDetails();
    student.displayDetails();

    return 0;
}
