#include <iostream>
#include <string>
using namespace std;

// Base class Cricketer
class Cricketer
{
protected:
    string name;
    int age;
    int matchesPlayed;

public:
    void readData()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter number of matches played: ";
        cin >> matchesPlayed;
    }

    void displayData()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Matches Played: " << matchesPlayed << endl;
    }
};

// Derived class Bowler
class Bowler : public Cricketer
{
private:
    int wickets;

public:
    void readBowlerData()
    {
        readData();
        cout << "Enter number of wickets: ";
        cin >> wickets;
    }

    void displayBowlerData()
    {
        displayData();
        cout << "Wickets: " << wickets << endl;
    }
};

// Derived class Batsman
class Batsman : public Cricketer
{
private:
    int runs;
    int centuries;

public:
    void readBatsmanData()
    {
        readData();
        cout << "Enter number of runs: ";
        cin >> runs;
        cout << "Enter number of centuries: ";
        cin >> centuries;
    }

    void displayBatsmanData()
    {
        displayData();
        cout << "Runs: " << runs << endl;
        cout << "Centuries: " << centuries << endl;
    }
};

int main()
{
    Bowler bowler;
    Batsman batsman;

    cout << "Enter Bowler Details:\n";
    bowler.readBowlerData();
    cout << "\nBowler Details:\n";
    bowler.displayBowlerData();

    cout << "\nEnter Batsman Details:\n";
    batsman.readBatsmanData();
    cout << "\nBatsman Details:\n";
    batsman.displayBatsmanData();

    return 0;
}
