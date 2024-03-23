#include <iostream>

using namespace std;

class complex
{
    int a;
    int b;

public:
    void setData(int r, int i)
    {
        a = r;
        b = i;
    }

    void getData()
    {
        cout << "The real part is " << a << endl;
        cout << "The imaginary part is " << b << endl;
    }
};

int main()
{
    complex c;
    // c.setData(5,10);
    // c.getData();

    // complex* ptr=&c;             this is also valid
    complex *ptr = new complex;
    // (*ptr).setData(5,10);        is exactly same as
    ptr->setData(20, 30);
    // (*ptr).getData();            is exactly same as
    ptr->getData();

    // array of objects
    complex *ptr1 = new complex[4];
    ptr1->setData(11, 22);
    ptr1->getData();

    return 0;
}