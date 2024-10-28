#include <iostream>
using namespace std;

// Base class Student
class Student
{
protected:
    int studentID;
    string name;

public:
    void readStudentData()
    {
        cout << "Enter Student ID: ";
        cin >> studentID;
        cout << "Enter Name: ";
        cin >> name;
    }

    void displayStudentData()
    {
        cout << "Student ID: " << studentID << endl;
        cout << "Name: " << name << endl;
    }
};

// Base class InternalExam
class InternalExam
{
protected:
    int marksFirst;

public:
    void readInternalMarks()
    {
        cout << "Enter marks for internal exam: ";
        cin >> marksFirst;
    }
};

// Base class ExternalExam
class ExternalExam
{
protected:
    int marksSecond;

public:
    void readExternalMarks()
    {
        cout << "Enter marks for external exam: ";
        cin >> marksSecond;
    }
};

// Derived class Result
class Result : public InternalExam, public ExternalExam, public Student
{
public:
    void displayResult()
    {
        displayStudentData();
        cout << "Total Marks: " << (marksFirst + marksSecond) << endl;
    }
};

int main()
{
    Result result;

    result.readStudentData();
    result.readInternalMarks();
    result.readExternalMarks();
    result.displayResult();

    return 0;
}
