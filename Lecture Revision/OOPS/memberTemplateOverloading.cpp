#include <iostream>

using namespace std;

template <class T>
class rayirth
{
    T data1;

public:
    rayirth(T a) : data1(a) {}
    void getData();
};

template <class T>
void rayirth<T>::getData()
{
    cout << "Data1 = " << data1 << endl;
}

template<class T>
void func(T a)
{
    cout << "Template Parameter Function\n" << a << endl;
}

void func(int a)
{
    cout << "Integer Parameter Function\n" << a << endl;
}

int main()
{
    rayirth<int> a(45);
    a.getData();
    func(21);
    func(22.4);
    return 0;
}