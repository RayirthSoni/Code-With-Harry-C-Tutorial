#include <iostream>
#include <cmath>

using namespace std;

class complex
{
    int a;
    int b;

public:
    complex() : a(0), b(0) {}
    complex(int r) : a(r), b(0) {}
    complex(int r, int i) : a(r), b(i) {}
    complex(complex &o) : a(o.a), b(o.b)
    {
        cout << "Copy constructor invoked\n";
    }
    void getData()
    {
        cout << "Complex Number = " << a << " + " << b << "i" << endl;
    }
};

class bankDeposit
{
    int principal;
    int years;
    float rate;
    float returnValue;

public:
    bankDeposit() {}
    bankDeposit(int, int, int);
    bankDeposit(int, int, float);
    void getData()
    {
        cout << "The prinicipal amount is " << principal << " and after " << years << " years at interest rate " << rate << " its value would be " << returnValue << endl;
    }
};

bankDeposit::bankDeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    rate = float(r) / 100;
    returnValue = principal;
    for (int i = 1; i <= years; i++)
    {
        returnValue = principal * (1 + rate);
    }
}

bankDeposit::bankDeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    rate = r;
    returnValue = principal;
    for (int i = 1; i <= years; i++)
    {
        returnValue = principal * (1 + rate);
    }
}

int main()
{
    complex c1, c2(5), c3(10, 20);
    c1.getData();
    c2.getData();
    c3.getData();

    complex c4 = c3;
    c4.getData();

    complex c5(c3);
    c5.getData();

    bankDeposit bd1(100, 4, 3), bd2(100, 4, 0.03f);
    bd1.getData();
    bd2.getData();

    return 0;
}