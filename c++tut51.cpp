// Virtual Functions
#include <iostream>
using namespace std;

class base
{
public:
    int var_base = 10;
    // since we have used keyword virtual now base class pointer will point to derived class member function.
    virtual void getData()
    {
        cout << "Value of var_base = " << var_base << endl;
    }
};

class derived : public base
{
public:
    int var_derived = 20;
    void getData()
    {
        cout << "Value of var_base = " << var_base << endl;
        cout << "Value of var_derived = " << var_derived << endl;
    }
};

int main()
{
    base *basePointer;
    base baseObject;
    derived derivedObject;
    basePointer=&derivedObject;
    basePointer->getData();
    return 0;
}