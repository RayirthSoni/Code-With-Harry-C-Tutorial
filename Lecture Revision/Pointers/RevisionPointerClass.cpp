#include <iostream>

using namespace std;

class cuboid
{
    int l, b, h;

public:
    void setData(int l, int b, int h)
    {
        this->l = l;
        this->b = b;
        this->h = h;
    }
    cuboid &setData2(int l, int b, int h)
    {
        this->l = l;
        this->b = b;
        this->h = h;
        return *this;
    }
    void getData()
    {
        cout << "Length = " << l << endl
             << "Breadth : " << b << endl
             << "Height = " << h << endl;
    }
};

int main()
{
    cuboid c;
    c.setData(10, 20, 30);
    c.getData();

    c.setData2(22,33,44).getData();
    return 0;
}