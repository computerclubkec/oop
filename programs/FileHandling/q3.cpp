// WAP to user r/w file using fstream.

#include <iostream>
#include <fstream>
#include <string>

class FileHandler {
private:
    std::fstream file; // File stream for both reading and writing

public:
    // Member function to open a file in read/write mode
    void openFile(const std::string& filename) {
        file.open(filename, std::ios::in | std::ios::out | std::ios::app); // Open file in read/write mode, and append mode

        if (!file) {
            std::cerr << "Error opening file: " << filename << std::endl;
            exit(1);
        }
    }

    // Member function to write data to the file
    void writeToFile(const std::string& data) {
        file << data << std::endl;
    }

    // Member function to read data from the file
    void readFromFile() {
        std::string line;
        while (getline(file, line)) {
            std::cout << line << std::endl;
        }
    }

    // Member function to reset the file pointer to the beginning
    void resetFilePointer() {
        file.seekg(0, std::ios::beg);
    }

    // Destructor to close the file
    ~FileHandler() {
        if (file.is_open()) {
            file.close();
        }
    }
};

int main() {
    FileHandler fileHandler;
    fileHandler.openFile("sample.txt");

    // Writing to the file
    fileHandler.writeToFile("Hello, World!");

    // Reset file pointer to the beginning for reading
    fileHandler.resetFilePointer();

    // Reading from the file
    std::cout << "Contents of the file:" << std::endl;
    fileHandler.readFromFile();

    return 0;
}
