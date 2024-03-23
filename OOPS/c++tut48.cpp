// this pointer
#include <iostream>

using namespace std;

class cuboid
{
    int l;
    int b;
    int h;

public:
    // void setData(int x, int y, int z)
    // here since we have x y z there won't be any problems but if we want l b & h it will create problems since in private section we
    // already have l b h which are data members for any object we create.Noiw situation will be like
    // l=l
    // b=b
    // h=h
    // here both l will refer to local l that is l creating for function because that has prefernce by defualt.
    // now we will use this pointer so that it points to l which we created in private section for all objects.
    void setData(int l, int b, int h)
    {
        this->l = l;
        this->b = b;
        this->h = h;
    }

    // if we want to return our object
    // here cuboid is type of function like int etc.it is cuboid since we want to return our object which is cuboid itself
    cuboid &setData2(int l, int b, int h)
    {
        this->l = l;
        this->b = b;
        this->h = h;
        return *this;
    }
    void getData()
    {
        cout << "Dimensions of rectangle are : " << l << ", " << b << " & " << h << endl;
    }
};

int main()
{
    // this is a keyword which is a pointer which points to object which invokes member function.(here it is c)
    // every object we create will have their l b h.this will point to objects we create
    cuboid c;
    c.setData(10, 20, 30);
    c.getData();

    cout << endl;
    // here we are creating chain of commands by making setData return our object
    c.setData2(11, 22, 33).getData();
    return 0;
}