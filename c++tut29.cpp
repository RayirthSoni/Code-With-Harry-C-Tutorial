#include <iostream>
using namespace std;

class complex
{
    int a;
    int b;

public:
    complex(int, int); // Constructor Declaration
    void getData()
    {
        cout << "Complex Number = " << a << " + " << b << "i" << endl;
    }
};

complex::complex(int real, int imaginary) // This is paramterized constructor as it takes 2 arguments
{
    a = real;
    b = imaginary;
}

int main()
{
    // Implicit Call
    complex c1(2, 5);

    // Explicit Call
    complex c2 = complex(4, 8);

    c1.getData();
    c2.getData();

    return 0;
}