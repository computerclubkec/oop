// WAP to show how namespace works


#include <iostream>

// First namespace
namespace first_namespace {
    void display() {
        std::cout << "This is the first namespace." << std::endl;
    }
}

// Second namespace
namespace second_namespace {
    void display() {
        std::cout << "This is the second namespace." << std::endl;
    }
}

int main() {
    // Calling functions from different namespaces
    first_namespace::display();
    second_namespace::display();

    return 0;
}
