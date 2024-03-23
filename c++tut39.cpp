// Multiple Inheritance
#include <iostream>

using namespace std;

/*
    syntax for inheriting in multiple inheritance
    class derived:{visibility-mode} base1, {visibility-mode} base
    {
        code for derived class;
    }
*/

class base1
{
protected:
    int b1;

public:
    void setB1(int o)
    {
        b1 = o;
    }
};

class base2
{
protected:
    int b2;

public:
    void setB2(int k)
    {
        b2 = k;
    }
};

class base3
{
protected:
    int b3;

public:
    void setB3(int s)
    {
        b3 = s;
    }
};

class derived : public base1, public base2, public base3
{
public:
    void show()
    {
        cout << "The value of base1 = " << b1 << endl;
        cout << "The value of base2 = " << b2 << endl;
        cout << "The value of base3 = " << b3 << endl;
        cout << "The sum of these values = " << b1 + b2 + b3 << endl;
    }
};

/*
The inheriting derived class will be like

Data Members:
b1 ---> protected
b2 ---> protected
b3 ---> protected

Member Functions:
setB1() ---> public
setB2() ---> public
setB3() ---> public
show()  ---> public
*/

int main()
{
    derived rayirth;
    rayirth.setB1(5);
    rayirth.setB2(15);
    rayirth.setB3(25);
    rayirth.show();

    return 0;
}