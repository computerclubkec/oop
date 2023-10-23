// WAP using fin and fout.

#include <iostream>
#include <fstream>
#include <string>

class FileHandler {
public:
    // Member function to write data to the file using ofstream (fout)
    void writeToFile(const std::string& filename, const std::string& data) {
        std::ofstream fout(filename, std::ios::app); // Open file in append mode

        if (!fout) {
            std::cerr << "Error opening file for writing: " << filename << std::endl;
            exit(1);
        }

        fout << data << std::endl;
        fout.close();
    }

    // Member function to read data from the file using ifstream (fin)
    void readFromFile(const std::string& filename) {
        std::ifstream fin(filename); // Open file in read mode

        if (!fin) {
            std::cerr << "Error opening file for reading: " << filename << std::endl;
            exit(1);
        }

        std::string line;
        while (getline(fin, line)) {
            std::cout << line << std::endl;
        }

        fin.close();
    }
};

int main() {
    FileHandler fileHandler;
    std::string filename = "sample.txt";

    // Writing to the file using fout
    fileHandler.writeToFile(filename, "Hello, World!");

    // Reading from the file using fin
    std::cout << "Contents of the file:" << std::endl;
    fileHandler.readFromFile(filename);

    return 0;
}
