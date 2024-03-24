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

    // object ka reference this usse return kar raha hai isiliye
    // cuboid&
    cuboid& setData2(int l, int b, int h)
    {
        this->l = l;
        this->b = b;
        this->h = h;
        return *this;
    }

    void getData()
    {
        cout << "Length = " << l << endl
             << "Breadth = " << b << endl
             << "Height = " << h << endl;
    }
};

int main()
{
    cuboid c1,c2;
    c1.setData(10, 20, 40);

    cout<<endl;
    c2.setData2(30, 50, 40).getData();
    return 0;
}