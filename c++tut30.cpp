#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex();
    complex(int r);
    complex(int r, int i);
    void getData()
    {
        cout << "Complex Number = " << a << " + " << b << "i" << endl;
    }
};

complex::complex()
{
    a = 0;
    b = 0;
}

complex::complex(int real)
{
    a = real;
    b = 0;
}

complex::complex(int real, int imaginary)
{
    a = real;
    b = imaginary;
}

int main()
{
    complex c1;
    c1.getData();

    complex c2(5);
    c2.getData();

    complex c3(2, 3);
    c3.getData();

    return 0;
}