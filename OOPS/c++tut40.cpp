// Exercise C++
// Simple Calculator - 4 operations
// Scientific Calculator - 4 operations
// Hybrid Calculator - inherites

// We will do it in 2 ways
// Way 1 : Will print all
// Way 2 : Takes user input for everything
#include <iostream>
#include <cmath>

using namespace std;

class simpleCalculator
{
    int a;
    int b;

public:
    void setData()
    {
        cout << "Enter a : ";
        cin >> a;
        cout << "Enter b : ";
        cin >> b;
    }
    void show()
    {
        cout << "The sum is " << a + b << endl;
        cout << "The difference is " << a - b << endl;
        cout << "The product is " << a * b << endl;
        cout << "The quotient is " << a / b << endl;
    }
    void simpleCalculation()
    {
        int c;
        cout << "Enter\n1 for addition\n2 for subtraction\n3 for multiplication\n4 for division\n";
        cin >> c;
        switch (c)
        {
        case 1:
            cout << "The answer is " << a + b << endl;
            break;
        case 2:
            cout << "The answer is " << a - b << endl;
            break;
        case 3:
            cout << "The answer is " << a * b << endl;
            break;
        case 4:
            cout << "The answer is " << a / b << endl;
            break;
        default:
            cout << "Invalid Number";
            break;
        }
    }
};

class scientificCalculator
{
    float a;

public:
    void setData()
    {
        cout << "Enter First Number for Scientific : ";
        cin >> a;
    }
    void show()
    {
        // turn float into radians
        float rad = (3.14 / 180) * a;
        cout << "The sin is " << sin(rad) << endl;
        cout << "The cos is " << cos(rad) << endl;
        cout << "The log is " << log(a) << endl;
        cout << "The squareRoot is " << sqrt(a) << endl;
    }
    void scientificCalculation()
    {
        int r;
        float rd = (3.14 / 180) * a;
        cout << "Enter\n1 for sine\n2 for cosine\n3 for logarithm\n4 for square\n";
        cin >> r;
        switch (r)
        {
        case 1:
            cout << "The answer is " << sin(rd) << endl;
            break;
        case 2:
            cout << "The answer is " << cos(rd) << endl;
            break;
        case 3:
            cout << "The answer is " << log(a) << endl;
            break;
        case 4:
            cout << "The answer is " << pow(a, 2) << endl;
            break;
        }
    }
};

class hybridCalculator : public simpleCalculator, public scientificCalculator
{
    int a;

public:
    void display()
    {
        simpleCalculator::setData();
        scientificCalculator::setData();
        simpleCalculator::show();
        scientificCalculator::show();
    }
    void show()
    {
        simpleCalculator::setData();
        simpleCalculator::simpleCalculation();
        scientificCalculator::setData();
        scientificCalculator::scientificCalculation();
    }
};

int main()
{
    hybridCalculator c1;
    c1.display();
    cout << endl
         << endl;
    c1.show();
    return 0;
}