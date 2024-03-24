#include <iostream>

using namespace std;

class complex
{
    int a, b;

public:
    void setData(int r, int i) { a = r, b = i; }
    void getData() { cout << "Complex Number = " << a << " + " << b << "i" << endl; }
    complex operator+(complex &c)
    {
        complex result;
        result.a = a + c.a;
        result.b = b + c.b;
        return result;
    }
    complex operator-(complex &c)
    {
        complex result;
        result.a = a - c.a;
        result.b = b - c.b;
        return result;
    }
    complex operator-()
    {
        complex s;
        s.a = -a;
        s.b = -b;
        return s;
    }
};

class vector
{
    int x, y, z;

public:
    void setData(int a, int b, int c) { x = a, y = b, z = c; }
    void getData() { cout << "Vector = " << x << "i + " << y << "j + " << z << "k" << endl; }
    vector operator+(vector &b)
    {
        vector a;
        a.x = x + b.x;
        a.y = y + b.y;
        a.z = z + b.z;
        return a;
    }
    vector operator-(vector &b)
    {
        vector a;
        a.x = x - b.x;
        a.y = y - b.y;
        a.z = z - b.z;
        return a;
    }
    vector operator-()
    {
        vector s;
        s.x = -x;
        s.y = -y;
        s.z = -z;
        return s;
    }
};

class sample
{
    int data;

public:
    void setData(int data) { this->data = data; }
    void getData() { cout << "Data = " << data << endl; }
    sample operator++()
    {
        sample a;
        a.data = ++data;
        return a;
    }
    sample operator++(int)
    {
        sample a;
        a.data = data++;
        return a;
    }
};

int main()
{
    complex c1, c2, c3;
    c1.setData(10, 20);
    c2.setData(30, 40);
    c1.getData();
    c2.getData();
    c3 = c1 + c2;
    c3.getData();
    c3 = -c3;
    c3.getData();
    c3 = c1 - c2;
    c3.getData();
    cout << endl
         << endl;

    vector v1, v2, v3;
    v1.setData(10, 20, 30);
    v2.setData(40, 50, 60);
    v1.getData();
    v2.getData();
    v3 = v1 + v2;
    v3.getData();
    v3.getData();
    v3 = v1 - v2;
    v3.getData();
    v3 = -v3;
    v3.getData();

    sample s1, s2, s3;
    s1.setData(10);
    s1.getData();
    s2 = ++s1;
    cout << "s1 = ";
    s1.getData();
    cout << "s2 = ";
    s2.getData();
    s2 = s1++;
    cout << "s1 = ";
    s1.getData();
    cout << "s2 = ";
    s2.getData();
    return 0;
}