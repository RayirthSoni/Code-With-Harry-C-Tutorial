#include <iostream>
using namespace std;

// Forward Declaration --> this tells class complex is there in code as complier goes line by line
class complex;

class calculator
{
public:
    int add(int d, int e)
    {
        return (d+e);
    }
    int sumRealComplex(complex, complex);
    int sumImaginaryComplex(complex, complex);
};

class complex
{
    int a;
    int b;

    // Individually declaring functions as friends
    // friend int calculator::sumRealComplex(complex, complex);
    // friend int calculator::sumImaginaryComplex(complex, complex);

    // Declaring the entire class as friend
    friend class calculator;

public:
    void setData(int real, int imaginary)
    {
        a = real;
        b = imaginary;
    }

    void printNumber()
    {
        cout << "The Complex Number is : " << a << " + " << b << "i" << endl;
    }
};


int calculator::sumRealComplex(complex v1, complex v2)
{
    return (v1.a + v2.a);
}

int calculator::sumImaginaryComplex(complex v1, complex v2)
{
    return (v1.b + v2.b);
}

int main()
{
    complex c1, c2;
    calculator c3;

    c1.setData(4, 2);
    c1.printNumber();

    c2.setData(3, 7);
    c2.printNumber();

    int realSum = c3.sumRealComplex(c1, c2);
    int imaginarySum = c3.sumImaginaryComplex(c1, c2);

    cout<<"The sum of real part of c1 and c2 is "<<realSum<<endl;
    cout<<"The sum of imaginary part of c1 and c2 is "<<imaginarySum<<endl;

    return 0;
}