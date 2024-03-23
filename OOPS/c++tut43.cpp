// video 46 theory constructor for derived class
#include <iostream>

using namespace std;

/*
Case 1:
class a:public b{
    Order of execution of constructor ---> first b() then a()
};

Case 2:
class a:public b,public c{
    Order of execution of constructor ---> first b() then c() and then a()
};

Case 3:
class a:public b,virtual public c{
    Order of execution of constructor ---> first c() then b() and then a()
};
*/

class base1
{
    int data1;

public:
    base1(int i)
    {
        data1 = i;
        cout << "Base1 class constructor called." << endl;
    }
    void getData()
    {
        cout << "The value of data1 is " << data1 << endl;
    }
};

class base2
{
    int data2;

public:
    base2(int i)
    {
        data2 = i;
        cout << "Base2 class constructor called." << endl;
    }
    void getData()
    {
        cout << "The value of data2 is " << data2 << endl;
    }
};

class derived : public base1, public base2
{
    int derived1, derived2;

public:
    // even if we would have written this as
    // derived(int a,int b,int c,int d): base2(b), base1(a)  ---> output would have been same for order of execution of constructor.
    // order of execution of constructor will change if
    // class derived:public base2,public base1
    derived(int a, int b, int c, int d) : base1(a), base2(b)
    {
        derived1 = c;
        derived2 = d;
        cout << "Derived class constructor called.\n";
    }
    void getData()
    {
        cout << "The values of derived1 is " << derived1 << endl
             << "The values of derived2 is " << derived2 << endl;
    }
};

int main()
{
    derived ray(1,2,3,4);
    ray.base1::getData();
    ray.base2::getData();
    ray.derived::getData();
    return 0;
}