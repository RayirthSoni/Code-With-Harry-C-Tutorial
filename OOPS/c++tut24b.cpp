#include <iostream>
using namespace std;

class complex
{
    int a;
    int b;

public:
    void setData(int r, int i)
    {
        a = r;
        b = i;
    }

    void setDataBySum(complex value1, complex value2)
    {
        a = value1.a + value2.a;
        b = value1.b + value2.b;
    }

    void printNumber()
    {
        cout << "The Complex Number is " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    complex c1, c2, c3;
    c1.setData(1, 5);
    c1.printNumber();

    c2.setData(2, 3);
    c2.printNumber();

    c3.setDataBySum(c1,c2);
    c3.printNumber();
    return 0;
}