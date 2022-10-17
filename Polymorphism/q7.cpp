/* Design a class that represents paper. Create class Book, newspaper, copy
    derived from class paper. Add necessary member function to make your program meaningful
    and also show constructor and virtual destructor. Create object Dynamically using pointer
    to the base class.
*/
#include <iostream>

using namespace std;

class Paper
{
private:
    int no_of_pages;

public:
    Paper()
    {
        cout << "Created Paper" << endl;
    }
    virtual void show()
    {
        cout << "No of Pages: " << no_of_pages << endl;
    }
    virtual void getData()
    {
        cout << "Enter No of Pages: ";
        cin >> no_of_pages;
    }
     ~Paper()
    {
        cout << "Deleted Paper" << endl;
    }
};

class Book : public Paper
{
private:
    string author;
    string title;

public:
    Book()
    {
        cout << "Created Book" << endl;
    }
    void show()
    {
        cout << "Book Title: " << title << endl;
        cout << "Author: " << author << endl;
        Paper::show();
    }

    void getData()
    {
        cout << "Enter Book Name: ";
        cin >> title;
        cout << "Enter Author Name: ";
        cin >> author;
        Paper::getData();
    }
    ~Book()
    {
        cout << "Deleted Book" << endl;
    }
};

class NewsPaper : public Paper
{
private:
    string author;
    string title;

public:
    NewsPaper()
    {
        cout << "Created NewsPaper" << endl;
    }
    void show()
    {
        cout << "NewsPaper Title: " << title << endl;
        cout << "Author: " << author << endl;
        Paper::show();
    }

    void getData()
    {
        cout << "Enter NewsPaper Name: ";
        cin >> title;
        cout << "Enter Author Name: ";
        cin >> author;
        Paper::getData();
    }
    ~NewsPaper()
    {
        cout << "Deleted NewsPaper" << endl;
    }
};

class Copy : public Paper
{
private:
    string author;
    string title;

public:
    Copy()
    {
        cout << "Created Copy" << endl;
    }
    void show()
    {
        cout << "Copy Title: " << title << endl;
        cout << "Author: " << author << endl;
        Paper::show();
    }

    void getData()
    {
        cout << "Enter Copy Name: ";
        cin >> title;
        cout << "Enter Author Name: ";
        cin >> author;
        Paper::getData();
    }
    ~Copy()
    {
        cout << "Deleted Copy" << endl;
    }
};

int main()
{
    Paper *paper;
    
    paper = new Book;
    paper->getData();
    paper->show();
    delete paper;

    paper = new NewsPaper;
    paper->getData();
    paper->show();
    delete paper;

    paper = new Copy;
    paper->getData();
    paper->show();
    delete paper; 
}