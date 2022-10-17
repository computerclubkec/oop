// WAP to create class 'time' object by taking object
// argument and also returning object as argument

#include <iostream>

using namespace std;

class Time
{
private:
    int days, hours, minutes, seconds;

public:
    void setData()
    {
        cout << "Enter Days: ";
        cin >> days;
        cout << "Enter Hours: ";
        cin >> hours;
        cout << "Enter Minutes: ";
        cin >> minutes;
        cout << "Enter Seconds: ";
        cin >> seconds;
    }
    void showData()
    {
        cout << days << " Days " << hours << " hours "
             << minutes << " minutes " << seconds << " seconds " << endl;
    }
    Time add(Time t)
    {
        Time temp;
        temp.days = days + t.days;
        temp.hours = hours + t.hours;
        temp.minutes = minutes + t.minutes;
        temp.seconds = seconds + t.seconds;
        return temp;
    }
};

int main()
{
    Time t1, t2, t3;
    t1.setData();
    t2.setData();
    t1.showData();
    t2.showData();
    t3 = t1.add(t2);
    t3.showData();
}
