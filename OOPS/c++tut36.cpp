// SINGLE INHERITANCE
#include <iostream>

using namespace std;

class base
{
    int data1;      // private by default and is not inheritable

public:
    int data2;
    void setData();
    int getData1();
    int getData2();
};

void base::setData()
{
    cout << "Enter Data1 : ";
    cin >> data1;
    cout << "Enter Data2 : ";
    cin >> data2;
}

int base::getData1()
{
    return data1;
}

int base::getData2()
{
    return data2;
}

class derived : public base                 // class derived publically
{
    int data3;

public:
    void process();
    void display();
};

void derived::process()
{
    data3 = data2 * getData1();
}

void derived::display()
{
    cout << "Value of data1 = " << getData1() << endl;
    cout << "Value of data2 = " << data2 << endl;
    cout << "Value of data3 = " << data3 << endl;
}

int main()
{
    derived d1;
    d1.setData();
    d1.getData1();
    d1.getData2();
    d1.process();
    d1.display();
    return 0;
}