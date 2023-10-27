// A bookshop in Kathmandu valley sells books and DVD. Two classes Book and DVD are inherited from the astract base class Media. The Media class has common data members such as title and publication. The class Book has data members such as number_of_pages and that of DVD has data member such as duration. Each class members has member functions such as read data() and showdata(). WAP for modeling the class hierarchy for book shop and process objects of these classes using pointers to the base class.

#include <iostream>

using namespace std;

class Media
{
protected:
    char title[50];
    char publication[50];

public:
    virtual void readData() = 0;
    virtual void showData()
    {
        cout << "Title: " << title << endl;
        cout << "Publication: " << publication << endl;
    }
};

class Books : public Media
{
private:
    int pages;

public:
    void readData()
    {
        cout << "Enter book title name: ";
        cin >> title;
        cout << "Enter book publication name: ";
        cin >> publication;
        cout << "Enter the no of pages: ";
        cin >> pages;
    }

    void showData()
    {
        Media::showData();
        cout << "No of Pages: " << pages << endl;
    }
};

class DVD : public Media
{
private:
    float duration;

public:
    void readData()
    {
        cout << "Enter DVD Title Name: ";
        cin >> title;
        cout << "Enter DVD Publication Name: ";
        cin >> publication;
    }

    void showData()
    {
        Media::showData();
        cout << "Duration: " << duration << endl;
    }
};

int main()
{
    Media *m;
    Books b;
    m = &b;
    m->readData();
    m->showData();
    
    DVD d;
    m = &d;
    m->readData();
    m->showData();
    return 0;
}