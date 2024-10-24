#include <iostream>
using namespace std;

// Class representing weight in Tola
class Tola
{
private:
    double weight;

public:
    Tola(double w) : weight(w) {}
    double getWeight()
    {
        return weight;
    }
};

// Class representing weight in grams
class Gram
{
private:
    double weight;

public:
    Gram(double w) : weight(w) {}
    double getWeight()
    {
        return weight;
    }
};

// Conversion function
Gram convertToGram(Tola tola)
{
    return Gram(tola.getWeight() * 11.664); // 1 Tola = 11.664 Grams
}

int main()
{
    double weightInTola;
    cout << "Enter weight in Tola: ";
    cin >> weightInTola;

    Tola tola(weightInTola);
    Gram gram = convertToGram(tola);

    cout << "Weight in grams: " << gram.getWeight() << " grams" << endl;

    return 0;
}
