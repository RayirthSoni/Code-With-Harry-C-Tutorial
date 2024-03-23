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
    void getData()
    {
        cout << a << " + " << b << "i" << endl;
    }

    // binary operator
    complex operator+(complex o2)
    {
        complex o3;
        o3.a = a + o2.a;
        o3.b = b + o2.b;
        return o3;
    }

    // unary operator
    complex operator-()
    {
        complex temp;
        temp.a = -a;
        temp.b = -b;
        return temp;
    }
};

class integer
{
    int x;

public:
    void setData(int a)
    {
        x = a;
    }
    void getData()
    {
        cout << x << endl;
    }
    // this is for preincrement
    integer operator++()
    {
        integer s;
        s.x = ++x;
        return s;
    }

    // this is for post increment.actual mein koi argument pass nahi kar rahe but isiliye taki complier difference
    // kar paaye.syntax hai.
    integer operator++(int)
    {
        integer s;
        s.x=x++;
        return s;
    }
};

int main()
{
    complex c1, c2;
    c1.setData(2, 3);
    c1.getData();
    c2.setData(2, 5);
    c2.getData();

    complex c3 = c1 + c2;
    c3.getData();

    c3 = -c1;
    c3.getData();

    integer a;
    a.setData(4);
    a.getData();
    integer b=++a;
    a.getData();
    b.getData();
    b=a++;
    a.getData();
    b.getData();
    return 0;
}