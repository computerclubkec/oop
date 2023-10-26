// WAP to open a file using member function.

#include <iostream>
#include <fstream>

class FileHandler {
private:
    std::ifstream file; // Input file stream

public:
    // Member function to open a file
    void openFile(const std::string& filename) {
        file.open(filename, std::ios::in); // Open the file in read mode

        if (!file) {
            std::cerr << "Error opening file: " << filename << std::endl;
        } else {
            std::cout << "File " << filename << " opened successfully!" << std::endl;
        }
    }

    // Destructor to close the file
    ~FileHandler() {
        if (file.is_open()) {
            file.close();
            std::cout << "File closed successfully!" << std::endl;
        }
    }
};

int main() {
    std::string filename;

    std::cout << "Enter the filename to open: ";
    std::cin >> filename;

    FileHandler fileHandler;
    fileHandler.openFile(filename); // This will open the file using the member function

    // Do any operations with the file here...

    return 0; // File will be closed automatically when the object goes out of scope
}
