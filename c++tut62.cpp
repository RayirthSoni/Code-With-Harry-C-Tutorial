// Function Templates & Function Templates With Parameters
#include <iostream>

using namespace std;

template <class t1, class t2>
float average(t1 a, t2 b)
{
    float ans = (float)(a + b) / 2;
    return ans;
}

template <class T>
void swapp(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    cout << average(12, 21) << endl;
    int a, b;
    cout << "First Number : ";
    cin >> a;
    cout << "Second Number : ";
    cin >> b;
    swapp(a, b);
    cout << "First Number : " << a << endl
         << "Second Number : " << b << endl;

    return 0;
}