// base class pointer to derived object
// virtual function in base class

#include <iostream>

using namespace std;

class base
{
public:
    int var_base;
    void getData()
    {
        cout << "Value of var_base = " << var_base << endl;
    }
};

class derived : public base
{
public:
    int var_derived;
    void getData()
    {
        cout << "Value of var_base = " << var_base << endl;
        cout << "Value of var_derived = " << var_derived << endl;
    }
};

class base2
{
public:
    int var_base2;
    virtual void getData()
    {
        cout << "Value of var_base2 = " << var_base2 << endl;
    }
};

class derived2 : public base2
{
public:
    int var_derived2;
    void getData()
    {
        cout << "Value of var_base2 = " << var_base2 << endl;
        cout << "Value of var_derived2 = " << var_derived2 << endl;
    }
};

int main()
{
    base *basePTR;
    base baseObj;
    derived derObj;
    derived *derPTR;

    basePTR=&derObj;
    basePTR->var_base=100;
    basePTR->getData();
    derPTR=&derObj;
    derPTR->var_base=200;
    derPTR->var_derived=400;
    derPTR->getData();


    base2 *base2PTR;
    base2 base2Obj;
    derived2 *der2Ptr;
    derived2 der2Obj;

    base2PTR=&der2Obj;
    base2PTR->var_base2=300;
    base2PTR->getData();
    der2Ptr=&der2Obj;
    der2Ptr->var_base2=600;
    der2Ptr->var_derived2=700;
    der2Ptr->getData();

    return 0;
}