// WAP to show default argument

#include <iostream>
using namespace std;

// Function to calculate the volume of a box
int volume(int length = 1, int width = 1, int height = 1) {
    return length * width * height;
}

int main() {
    // Calling the function with all arguments provided
    cout << "Volume with dimensions 3, 4, 5 is " << volume(3, 4, 5) << endl;

    // Calling the function with some arguments provided
    cout << "Volume with dimensions 5, 6 is " << volume(5, 6) << endl;

    // Calling the function without any arguments
    cout << "Default volume is " << volume() << endl;

    return 0;
}
