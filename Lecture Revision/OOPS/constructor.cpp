#include <iostream>
#include <cmath>

using namespace std;

/*  NOTES
bankdeposit
vector
complex

*/

class bankDeposit
{
    int principal;
    int time;
    float rateInterest;
    float amount;

public:
    bankDeposit() {}
    bankDeposit(int, int, int);
    bankDeposit(int, int, float);
    void getData()
    {
        cout << "The principal was " << principal
             << " and at rate of interest " << rateInterest
             << " after " << time << " years its"
             << " amount would be " << amount << endl;
    }
};

bankDeposit::bankDeposit(int p, int t, float r)
{
    principal = p;
    time = t;
    rateInterest = r;
    amount = principal;
    for (int i = 1; i <= t; i++)
    {
        amount = amount * (1 + rateInterest);
    }
}

bankDeposit::bankDeposit(int p, int t, int r)
{
    principal = p;
    time = t;
    rateInterest = float(r) / 100;
    amount = principal;
    for (int i = 1; i <= t; i++)
    {
        amount = amount * (1 + rateInterest);
    }
}

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
        cout << "Copy Constructor Invoked\n";
    }
    void getData()
    {
        cout << "Complex Number = " << a << " + " << b << "i" << endl;
    }
};

class vector
{
    int x, y, z;

public:
    vector() {}
    vector(int r) : x(r), y(0), z(0) {}
    vector(int r, int s) : x(r), y(s), z(0) {}
    vector(int r, int s, int t) : x(r), y(s), z(t) {}
    void getData()
    {
        cout << "Vector = " << x << "i + " << y << "j + " << z << "k" << endl;
    }
};

class point
{
    int x, y, z;
    friend void pointDistance(point, point);

public:
    point(int a, int b, int c) : x(a), y(b), z(c) {}
    void getData()
    {
        cout << "Point = (" << x << "," << y << "," << z << ")" << endl;
    }
};

void pointDistance(point o1, point o2)
{
    cout << "Distance between points = " << sqrt(pow(o1.x - o2.x, 2) + pow(o1.y - o2.y, 2) + pow(o1.z - o2.z, 2)) << endl;
}

int main()
{
    complex c1, c2(5), c3(10, 20);
    c1.getData();
    c2.getData();
    c3.getData();
    complex c4(c3);
    c4.getData();

    bankDeposit bd1, bd2(1000, 5, 4), bd3(1000, 5, 0.04f);
    bd1.getData();
    bd2.getData();
    bd3.getData();

    point p1(0, 0, 0), p2(4, 3, 0);
    p1.getData();
    p2.getData();
    pointDistance(p1, p2);

    vector v1, v2(3), v3(4,5),v4(6,7,8);
    v1.getData();
    v2.getData();
    v3.getData();
    v4.getData();

    return 0;
}