#include <iostream>
#include <cmath>
using namespace std;

class complex
{
    int a;
    int b;

public:
    complex(int, int);
    void getData()
    {
        cout << "Complex Number = " << a << " + " << b << "i" << endl;
    }
};

class vectr
{
    int x;
    int y;
    int z;

public:
    vectr(int, int, int);
    void getData()
    {
        cout << "Vector = " << x << "i + " << y << "j + " << z << "k" << endl;
    }
};

class point
{
    int x;
    int y;
    int z;
    friend void distancePoint(point, point);

public:
    point()
    {
        cout << "Enter x Coordinate : ";
        cin >> x;
        cout << "Enter y Coordinate : ";
        cin >> y;
        cout << "Enter z Coordinate : ";
        cin >> z;
    }

    void getData()
    {
        cout << "Point is (" << x << "," << y << "," << z << ")" << endl;
    }
};

complex::complex(int real, int imaginary)
{
    a = real;
    b = imaginary;
}

vectr::vectr(int a, int b, int c)
{
    x = a;
    y = b;
    z = c;
}

void distancePoint(point o1, point o2)
{
    cout << "Distance between 2 points = " << sqrt(pow(o2.x - o1.x, 2) + pow(o2.y - o1.y, 2) + pow(o2.z - o1.z, 2));
}

int main()
{
    complex c1(5, 3);
    c1.getData();
    complex c2 = complex(3, 2);
    c2.getData();

    cout << endl;
    vectr v1(2, 3, 5), v2(1, 4, 1);
    v1.getData();
    v2.getData();

    cout << endl;
    point p1, p2;
    p1.getData();
    p2.getData();
    distancePoint(p1, p2);
    return 0;
}