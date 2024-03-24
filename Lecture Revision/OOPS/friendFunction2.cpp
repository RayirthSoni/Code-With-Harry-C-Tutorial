#include <iostream>
using namespace std;

// Forward Declaration
class complex;

class calculator
{
public:
    int n1, n2;
    int add(int, int);
    int subtract(int, int);
    int multiplication(int, int);
    int division(int, int);
    int mod(int, int);
    int complexRealSum(complex, complex);
    int complexImaginarySum(complex, complex);
};

class complex
{
    int a;
    int b;
    friend class calculator;

public:
    void setData()
    {
        cout << "Enter Real Part : ";
        cin >> a;
        cout << "Enter Imaginary Part : ";
        cin >> b;
    }
    void getData()
    {
        cout << "The Complex Number is " << a << " + " << b << "i" << endl;
    }
};

int calculator::add(int a, int b)
{
    return a + b;
}

int calculator::subtract(int a, int b)
{
    return a - b;
}

int calculator::multiplication(int a, int b)
{
    return a * b;
}

int calculator::division(int a, int b)
{
    return a / b;
}

int calculator::mod(int a, int b)
{
    return a % b;
}

int calculator::complexRealSum(complex o1, complex o2)
{
    return o1.a + o2.a;
}

int calculator::complexImaginarySum(complex o1, complex o2)
{
    return o1.b + o2.b;
}

int main()
{
    calculator sample;
    cout << "Enter First Number : ";
    cin >> sample.n1;
    cout << "Enter Second Number : ";
    cin >> sample.n2;
    cout << "\nUsing add function, on our input we get " << sample.add(sample.n1, sample.n2) << endl;
    cout << "\nUsing subtract function, on our input we get " << sample.subtract(sample.n1, sample.n2) << endl;
    cout << "\nUsing multiplication function, on our input we get " << sample.multiplication(sample.n1, sample.n2) << endl;
    cout << "\nUsing division function, on our input we get " << sample.division(sample.n1, sample.n2) << endl;
    cout << "\nUsing mod function, on our input we get " << sample.mod(sample.n1, sample.n2) << endl;

    complex c1, c2;

    c1.setData();
    c1.getData();

    c2.setData();
    c2.getData();

    calculator complxCalc;
    cout << "The Sum of Real Part of Both Complex Number is " << complxCalc.complexRealSum(c1, c2) << endl;
    cout << "The Sum of Imaginary Part of Both Complex Number is " << complxCalc.complexImaginarySum(c1, c2) << endl;
    return 0;
}