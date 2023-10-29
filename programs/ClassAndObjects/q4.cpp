// Create a class named "Animal" with data and methods as follows:
//     - Data: name, id_number, cost;
//     - Methods: void setdata(char, int, float) and void showdata()
//     - Create two different objects of type "Animals" and use setdata() to set the data member values and use showdata() to display them.

#include <iostream>
#include <string>

class Animal {
private:
    std::string name;
    int id_number;
    float cost;

public:
    // Method to set the data
    void setdata(std::string n, int id, float c) {
        name = n;
        id_number = id;
        cost = c;
    }

    // Method to display the data
    void showdata() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "ID Number: " << id_number << std::endl;
        std::cout << "Cost: $" << cost << std::endl;
    }
};

int main() {
    Animal animal1, animal2;  // Creating two objects of type Animal

    // Setting data for animal1 using setdata() method
    animal1.setdata("Lion", 101, 2000.50);

    // Setting data for animal2 using setdata() method
    animal2.setdata("Elephant", 102, 3000.75);

    // Displaying data for animal1 using showdata() method
    std::cout << "Details of Animal 1:" << std::endl;
    animal1.showdata();
    std::cout << std::endl; // Printing a blank line for better readability

    // Displaying data for animal2 using showdata() method
    std::cout << "Details of Animal 2:" << std::endl;
    animal2.showdata();

    return 0;
}
