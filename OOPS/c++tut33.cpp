// copy constructor
// there are 3 types of constructor - default, parameterized and copy
// by defualt if no constructor present in program compiler will define default and copy by default
// if any constructor is present then default won't be defined but copy constructor still defined
// if defualt present only copy will be defined
// if parameterized present only copy will be defined but default won't be
// if copy present no need to define copy and default won't be defined
// copy constructor can also be initialised in main function as
// number n1 = n other than number n1(n)
// copy constructor invoked in same line
#include <iostream>
#include <cmath>

using namespace std;


class complex
{
    int a;
    int b;

public:
    complex() {}

    complex(int r)
    {
        a = r;
    }

    complex(int r, int i)
    {
        a = r;
        b = i;
    }
    
    complex(complex &o)
    {
        cout<<"Copy Constructor Used.\n";
        a = o.a;
        b = o.b;
    }

    void getData()
    {
        cout << "Complex Number = " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    complex x;             // garbage value lega idhar ham default constructor mein chahe tpph define bhi kar sakte hain value.
    x.getData();

    complex y(5);
    y.getData();

    complex z(10,20);
    z.getData();

    complex c1(x);         // copy constructor invoked here.
    c1.getData();

    complex c2;
    c2=y;                // copy constructor not invoked here because this object was created in previous line
    c2.getData();

    complex c3=z;       // copy constructor invoked.
    c3.getData();


    return 0;
}