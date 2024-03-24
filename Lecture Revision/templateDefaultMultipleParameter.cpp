#include <iostream>

using namespace std;

// multiple parameter
template <class t1, class t2>
class sample
{
    t1 data1;
    t2 data2;

public:
    void setData()
    {
        cout << "Enter Data1 : ";
        cin >> data1;
        cout << "Enter Data2 : ";
        cin >> data2;
    }
    void getData()
    {
        cout << "Data1 = " << data1 << endl;
        cout << "Data2 = " << data2 << endl;
    }
};

// default parameter
template <class t1 = int, class t2 = float, class t3 = string>
class ray
{
    t1 a;
    t2 b;
    t3 c;

public:
    ray(t1 d, t2 e, t3 f) : a(d), b(e), c(f) {}
    void getData()
    {
        cout << "The value of a is " << a << endl
             << "The value of b is " << b << endl
             << "The value of c is " << c << endl;
    }
};

int main()
{
    // multiple parameter
    sample<int, int> s1;
    s1.setData();
    s1.getData();
    cout << endl;
    sample<float, char> s2;
    s2.setData();
    s2.getData();

    // default parameter
    ray<> o1(50, 100.5, "Hello !");
    o1.getData();
    cout << endl;
    ray<char> o2('a', 400.5, "Hola !");
    o2.getData();
    cout << endl;
    ray<float, int> o3(11.24, 500, "Yo !");
    o3.getData();
    cout << endl;
    ray<int,int,int> o4(1,2,3);
    o4.getData();
    return 0;
}