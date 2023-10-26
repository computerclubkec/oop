// WAP to store book database in a file. Design a book class with members ISBN number, name of author, title, price. The Program should able to store book object to a file, find a book in the database and display according to ISBN number. Also display all records.
// getInput()
// display()
// add_record
// show_record
// search_record_by_isbn_number & modify also.

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

class Book {
    std::string isbn;
    std::string author;
    std::string title;
    double price;

public:
    // Constructors
    Book() {}
    Book(const std::string &isbn, const std::string &author, const std::string &title, double price)
        : isbn(isbn), author(author), title(title), price(price) {}

    // Member functions
    void getInput() {
        std::cout << "Enter ISBN: ";
        std::cin >> isbn;
        std::cin.ignore(); // Clear the newline character from the buffer
        std::cout << "Enter Author: ";
        std::getline(std::cin, author);
        std::cout << "Enter Title: ";
        std::getline(std::cin, title);
        std::cout << "Enter Price: ";
        std::cin >> price;
    }

    void display() const {
        std::cout << "ISBN: " << isbn << ", Author: " << author << ", Title: " << title << ", Price: $" << price << std::endl;
    }

    std::string getISBN() const { return isbn; }

    // Overloading extraction and insertion operators for file operations
    friend std::ofstream &operator<<(std::ofstream &ofs, const Book &book);
    friend std::ifstream &operator>>(std::ifstream &ifs, Book &book);
};

std::ofstream &operator<<(std::ofstream &ofs, const Book &book) {
    ofs << book.isbn << "\n" << book.author << "\n" << book.title << "\n" << book.price << "\n";
    return ofs;
}

std::ifstream &operator>>(std::ifstream &ifs, Book &book) {
    getline(ifs, book.isbn);
    getline(ifs, book.author);
    getline(ifs, book.title);
    ifs >> book.price;
    ifs.ignore(); // Clear the newline character from the buffer
    return ifs;
}

class BookDatabase {
    std::string filename;

public:
    BookDatabase(const std::string &filename) : filename(filename) {}

    void add_record() {
        Book book;
        book.getInput();
        
        std::ofstream ofs(filename, std::ios::app); // Append mode
        ofs << book;
        ofs.close();
    }

    void show_records() {
        std::ifstream ifs(filename);
        Book book;
        while (ifs >> book) {
            book.display();
        }
        ifs.close();
    }

    void search_record_by_isbn_number() {
        std::string search_isbn;
        std::cout << "Enter ISBN to search: ";
        std::cin >> search_isbn;
        std::cin.ignore(); // Clear the newline character from the buffer

        std::ifstream ifs(filename);
        Book book;
        bool found = false;
        while (ifs >> book) {
            if (book.getISBN() == search_isbn) {
                std::cout << "Book found:\n";
                book.display();
                found = true;
                break;
            }
        }
        ifs.close();

        if (!found) {
            std::cout << "Book with ISBN " << search_isbn << " not found.\n";
        }
    }

    void modify_record() {
        std::vector<Book> books;
        std::string search_isbn;
        std::cout << "Enter ISBN to modify: ";
        std::cin >> search_isbn;
        std::cin.ignore(); // Clear the newline character from the buffer

        bool found = false;
        std::ifstream ifs(filename);
        Book book;
        while (ifs >> book) {
            if (book.getISBN() == search_isbn) {
                std::cout << "Book found:\n";
                book.display();
                std::cout << "\nEnter new details for the book:\n";
                book.getInput();
                found = true;
            }
            books.push_back(book);
        }
        ifs.close();

        std::ofstream ofs(filename); // Overwrite mode
        for (const auto &b : books) {
            ofs << b;
        }
        ofs.close();

        if (!found) {
            std::cout << "Book with ISBN " << search_isbn << " not found.\n";
        } else {
            std::cout << "Book details updated successfully.\n";
        }
    }
};

int main() {
    BookDatabase db("books.txt");

    int choice;
    do {
        std::cout << "\nMenu:\n";
        std::cout << "1. Add Record\n";
        std::cout << "2. Show Records\n";
        std::cout << "3. Search Record by ISBN\n";
        std::cout << "4. Modify Record\n";
        std::cout << "5. Exit\n";
        std::cout << "Enter choice: ";
        std::cin >> choice;
        std::cin.ignore(); // Clear the newline character from the buffer

        switch (choice) {
            case 1: db.add_record(); break;
            case 2: db.show_records(); break;
            case 3: db.search_record_by_isbn_number(); break;
            case 4: db.modify_record(); break;
            case 5: std::cout << "Goodbye!\n"; break;
            default: std::cout << "Invalid choice!\n";
        }
    } while (choice != 5);

    return 0;
}
