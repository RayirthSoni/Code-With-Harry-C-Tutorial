#include <iostream>
#include <cmath>

using namespace std;

class complex;
class B;

class calculator
{
public:
    int sumRealComplex(complex, complex);
    int sumImaginaryComplex(complex, complex);
    int differenceRealComplex(complex, complex);
    int differenceImaginaryComplex(complex, complex);
};

class complex
{
    int a;
    int b;
    friend class calculator;
    friend complex sumComplex(complex, complex);
    friend complex differenceComplex(complex, complex);

public:
    void setData()
    {
        cout << "Enter Real Part : ";
        cin >> a;
        cout << "Enter Imaginary Part : ";
        cin >> b;
    }

    void getData()
    {
        cout << "Complex Number = " << a << " + " << b << "i" << endl;
    }
};

class point
{
    int x;
    int y;
    int z;
    friend void distancePoint(point, point);

public:
    void setData()
    {
        cout << "Enter X Coordinate : ";
        cin >> x;
        cout << "Enter Y Coordinate : ";
        cin >> y;
        cout << "Enter Z Coordinate : ";
        cin >> z;
    }
    void getData()
    {
        cout << "Point is : (" << x << "," << y << "," << z << ")" << endl;
    }
};

class A
{
    int data;
    friend void sumObjects(A, B);

public:
    void setData()
    {
        cout << "Enter data : ";
        cin >> data;
    }
    void getData()
    {
        cout << "The data is " << data << endl;
    }
};

class B
{
    int num;
    friend void sumObjects(A, B);

public:
    void setData()
    {
        cout << "Enter num : ";
        cin >> num;
    }
    void getData()
    {
        cout << "The num is " << num << endl;
    }
};

int calculator::sumRealComplex(complex o1, complex o2)
{
    return o1.a + o2.a;
}

int calculator::sumImaginaryComplex(complex o1, complex o2)
{
    return o1.b + o2.b;
}

int calculator::differenceRealComplex(complex o1, complex o2)
{
    return o1.a - o2.a;
}

int calculator::differenceImaginaryComplex(complex o1, complex o2)
{
    return o1.b - o2.b;
}

complex sumComplex(complex o1, complex o2)
{
    complex o3;
    o3.a = o1.a + o2.a;
    o3.b = o1.b + o2.b;
    return o3;
}

complex differenceComplex(complex o1, complex o2)
{
    complex o3;
    o3.a = o1.a - o2.a;
    o3.b = o1.b - o2.b;
    return o3;
}

void sumObjects(A o1, B o2)
{
    cout << "Sum of objects of both classes are : " << o1.data + o2.num << endl;
}

void distancePoint(point o1, point o2)
{
    cout << "Distance between points is " << sqrt(pow(o1.x - o2.x, 2) + pow(o1.y - o2.y, 2) + pow(o1.z - o2.z, 2));
}

int main()
{
    complex c1, c2;
    point p1, p2;
    calculator calc1;
    A a1;
    B b1;

    c1.setData();
    c2.setData();
    cout << endl;

    c1.getData();
    c2.getData();
    cout << endl;

    cout << "Sum of Real Part of Complex Number = " << calc1.sumRealComplex(c1, c2) << endl;
    cout << "Sum of Imaginary Part of Complex Number = " << calc1.sumImaginaryComplex(c1, c2) << endl;
    cout << "Difference of Real Part of Complex Number = " << calc1.differenceImaginaryComplex(c1, c2) << endl;
    cout << "Difference of Imaginary Part of Complex Number = " << calc1.differenceRealComplex(c1, c2) << endl;

    cout << endl;
    sumComplex(c1, c2).getData();
    differenceComplex(c1, c2).getData();

    cout << endl;
    a1.setData();
    b1.setData();

    cout << endl;
    a1.getData();
    b1.getData();

    cout << endl;
    sumObjects(a1, b1);

    cout << endl;
    p1.setData();
    p2.setData();

    cout << endl;
    p1.getData();
    p2.getData();

    cout << endl;
    distancePoint(p1, p2);
    return 0;
}