#include <iostream>

using namespace std;

template <class T>
class RS
{
    T data;

public:
    RS(T d) : data(d) {}
    void getData();
};
template <class T>
void RS<T>::getData()
{
    cout << "Data = " << data << endl;
}

template <class X>
float average(X a, X b)
{
    return (a + b) / 2;
}

template <class X>
void swapp(X d1, X d2)
{
    X temp = d1;
    d1 = d2;
    d2 = temp;
}

int main()
{
    RS<int> o(2);
    o.getData();
    cout << average(11, 22) << endl;
    cout << average(11.2, 224.2) << endl;
    float a, b;
    cin >> a >> b;
    cout << a << endl
         << b << endl;
    swap(a, b);
    cout << a << endl
         << b << endl;
    return 0;
}