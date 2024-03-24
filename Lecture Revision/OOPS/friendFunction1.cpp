#include <iostream>
using namespace std;

class complex
{
    int a;
    int b;
    friend complex sumComplex(complex, complex);

public:
    void setData(int real, int imaginary)
    {
        a = real;
        b = imaginary;
    }
    void getData()
    {
        cout << "The Complex Number is : " << a << " + " << b << "i" << endl;
    }
};

complex sumComplex(complex o1, complex o2)
{
    complex o3;
    o3.setData(o1.a + o2.a, o1.b + o2.b); 
    return o3;
}

int main()
{
    complex c1, c2;

    c1.setData(3, 5);
    c1.getData();

    c2.setData(4, 3);
    c2.getData();

    complex c3 = sumComplex(c1, c2);
    c3.getData();

    return 0;
}