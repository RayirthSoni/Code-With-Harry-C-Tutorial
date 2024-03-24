#include <iostream>

using namespace std;

class complex
{
    int a;
    int b;

public:
    complex()
    {
        a = 0;
        b = 0;
    }
    complex(int r)
    {
        a = r;
        b = 0;
    }
    complex(int r, int i)
    {
        a = r;
        b = i;
    }
    void getData()
    {
        cout << a << " + " << b << "i" << endl;
    }
};

int main()
{
    complex c1,c2(19),c3(22,44);
    c1.getData();
    c2.getData();
    c3.getData();
    return 0;
}