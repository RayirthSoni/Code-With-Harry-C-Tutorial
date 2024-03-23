#include <iostream>
using namespace std;

class complex
{
    int a;
    int b;

public:
    complex(int r = 5, int i = 8)
    {
        a = r;
        b = i;
    }

    void getData()
    {
        cout << "Complex Number  = " << a << " + " << b << "i" << endl;
    }
};

class simple
{
    int data1, data2, data3;

public:
    simple(int a = 1, int b = 2, int c = 3)
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }

    void getData()
    {
        cout << "The values of data1, data2 and data3 are " << data1 << ", " << data2 << " and " << data3 << endl;
    }
};

int main()
{
    complex c1;
    c1.getData();

    complex c2(9);
    c2.getData();

    complex c3(10, -12);
    c3.getData();

    simple s1, s2(4), s3(4, 5), s4(4, 5, 6);
    s1.getData();
    s2.getData();
    s3.getData();
    s4.getData();

    return 0;
}