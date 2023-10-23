// WAP to open a file using constructor.

#include <iostream>
#include <fstream>

class FileOpener {
private:
    std::ifstream file; // Input file stream

public:
    // Constructor that takes a filename as an argument and opens the file
    FileOpener(const std::string& filename) {
        file.open(filename, std::ios::in); // Open the file in read mode

        if (!file) {
            std::cerr << "Error opening file: " << filename << std::endl;
            exit(1); // Exit the program if file opening fails
        } else {
            std::cout << "File " << filename << " opened successfully!" << std::endl;
        }
    }

    // Destructor to close the file
    ~FileOpener() {
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

    FileOpener fileOpener(filename); // This will open the file using the constructor

    // Do any operations with the file here...

    return 0; // File will be closed automatically when the object goes out of scope
}
