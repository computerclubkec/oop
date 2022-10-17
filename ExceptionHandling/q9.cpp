// WAP to read name, roll number and marks that catches multiple exceptions
// using exception calss if rollnumber is negative and
//  marks greater than full marks;

#include <iostream>

using namespace std;

class Student
{
private:
    string name;
    int roll_no;
    float marks;

public:
    class NegRollError
    {
    private:
        int roll;

    public:
        friend class Student;
        NegRollError(int roll)
        {
            this->roll = roll;
        };
    };
    class MarksOverFlow
    {
    };

    void getData()
    {
        cout << "Enter Name: ";
        cin >> name;
        try
        {
            cout << "Enter Roll No: ";
            cin >> roll_no;
            if (roll_no < 1)
            {
                throw NegRollError(roll_no);
            }

            cout << "Enter Marks: ";
            cin >> marks;
            if (marks > 100)
            {
                throw MarksOverFlow();
            }
        }
        catch (NegRollError obj)
        {
            cout << obj.roll << "can't be  negative " << endl;
        }
        catch (MarksOverFlow)
        {
            cout << "Marks can't be greater than 100" << endl;
        }
    }
};

int main()
{
    Student obj;
    obj.getData();
}