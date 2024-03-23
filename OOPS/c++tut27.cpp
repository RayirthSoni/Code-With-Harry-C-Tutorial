#include <iostream>
using namespace std;

class Y;

class X
{
    int data;
    friend void add(X o1,Y o2);

public:
    void setData(int value)
    {
        data = value;
    }
};

class Y
{
    int num;
    friend void add(X o1,Y o2);

public:
    void setNum(int value)
    {
        num = value;
    }
};

void add(X o1, Y o2)
{
    cout << "Summing the data present in class X & Y is " << (o1.data + o2.num);
}

int main()
{
    X d1;
    d1.setData(5);

    Y d2;
    d2.setNum(10);

    add(d1,d2);
    return 0;
}