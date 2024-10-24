#include <iostream>
using namespace std;

// Base class Students
class Students
{
protected:
    string name;
    int rollNumber;

public:
    void readStudentData()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> rollNumber;
    }
};

// Derived class Test
class Test : public Students
{
protected:
    int marks1, marks2;

public:
    void readMarks()
    {
        cout << "Enter marks for subject 1: ";
        cin >> marks1;
        cout << "Enter marks for subject 2: ";
        cin >> marks2;
    }
};

// Derived class Result
class Result : public Test
{
public:
    void displayResult()
    {
        int total = marks1 + marks2;
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Total Marks: " << total << endl;
    }
};

int main()
{
    Result result;

    result.readStudentData();
    result.readMarks();
    result.displayResult();

    return 0;
}
