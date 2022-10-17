// WAP to overload unary operator(++, --)

#include <iostream>

using namespace std;
class Time
{
private:
    int hour, minute, second;

public:
    Time()
    {
        hour = minute = second = 0;
    }
    Time(int _hour, int _minute, int _second)
    {
        hour = _hour;
        minute = _minute;
        second = _second;
    }
    void display()
    {
        cout << "Hour: " << hour << endl;
        cout << "minute: " << minute << endl;
        cout << "second: " << second << endl;
    }
    Time operator++()
    {
        return Time(++hour, ++minute, ++second);
    }
    Time operator--(int)
    {
        return Time(hour--, minute--, second--);
    }
    friend Time operator++(Time &, int);
    friend Time operator--(Time &);
};

Time operator++(Time &obj, int)
{
    return Time(obj.hour++, obj.minute++, obj.second++);
}
Time operator--(Time &obj)
{
    return Time(--obj.hour, --obj.minute, --obj.second);
}

int main()
{
    Time t1(1,2,3);
    t1++;
    t1.display();
    t1--;
    t1.display();
    Time t3 = t1--;
    t3.display();
    t1.display();
}