#include <iostream>
using namespace std;

// Forward Declaration
class sample2;

class sample1
{
    int data;
    friend void sum(sample1, sample2);

public:
    void setData(int value)
    {
        data = value;
    }

    void getSample1Data()
    {
        cout << "The Value is : " << data << endl;
    }
};

class sample2
{
    int num;
    friend void sum(sample1, sample2);

public:
    void setNum(int value)
    {
        num = value;
    }
    void getSample2Num()
    {
        cout << "The Value is : " << num << endl;
    }
};

void sum(sample1 o1, sample2 o2)
{
    cout << "Sum of 2 objects is " << o1.data + o2.num << endl;
}

int main()
{
    sample1 a;
    sample2 b;

    a.setData(10);
    b.setNum(10);

    sum(a, b);
    return 0;
}