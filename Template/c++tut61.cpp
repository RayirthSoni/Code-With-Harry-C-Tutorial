// Class Template With Default Parameters
#include <iostream>

using namespace std;

template <class T1 = int, class T2 = char, class T3 = float>
class Rayirth
{
    T1 a;
    T2 b;
    T3 c;

public:
    Rayirth(T1 d, T2 e, T3 f) : a(d), b(e), c(f) {}
    void getData()
    {
        cout << "The value of a is " << a << endl
             << "The value of b is " << b << endl
             << "The value of c is " << c << endl;
    }
};

int main()
{
    Rayirth<> o1(21, 'e', 2134.4);
    o1.getData();
    cout << endl;

    Rayirth<float, char, int> o2(23.4, 's', 213);
    o2.getData();
    cout << endl;

    Rayirth<float, float, char> o3(21.2, 2.34, 'a');
    o3.getData();
    cout << endl;
    return 0;
}