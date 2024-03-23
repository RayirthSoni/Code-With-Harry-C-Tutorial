// Member Function Template & Overrloading Template Function
#include <iostream>

using namespace std;

template <class T>
class Rayirth
{
    T data;

public:
    Rayirth(T a) : data(a) {}
    void getData();
};

template <class T>
void Rayirth<T>::getData()
{
    cout << "The value of data is " << data << endl;
}

// overloading

void func(int a)
{
    cout << "This is first function.\nThe value of a is " << a << endl;
}

template <class T>
void func(T a)
{
    cout << "This is template function.\nThe value of a is" << a << endl;
}

int main()
{
    Rayirth<char> o1('s');
    o1.getData();

    cout<<endl;
    func(2);
    func(2.3);
    func('a');
    return 0;
}