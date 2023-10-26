// WAP to create file named "programmerone.cpp" with function display. Also create file named "Programmetwo.cpp" with function named display. Access both display from third program named "result.cpp". Use namespace whenever needed

// programmerone.cpp

#include <iostream>
namespace ProgrammerOne {
    void display() {
        std::cout << "Display function from ProgrammerOne" << std::endl;
    }
}