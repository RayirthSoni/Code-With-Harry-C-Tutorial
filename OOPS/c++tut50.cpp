// Pointer to Derived Class
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

class derived:public base
{
public:
    int var_derived;
    void getData()
    {
        cout << "Value of var_base = " << var_base << endl;
        cout << "Value of var_derived = " << var_derived << endl;
    }
};

int main()
{
    base *baseObjectPointer;
    base baseObject;
    derived derivedObject;
    derived *derivedObjectPointer;

    baseObjectPointer = &derivedObject;

    baseObjectPointer->var_base = 100;
    // baseObjectPointer->var_derived = 300;        will throw an error
    baseObjectPointer->getData();          // here base class getData() is invoked

    derivedObjectPointer=&derivedObject;
    derivedObjectPointer->var_base = 800;
    // baseObjectPointer->getData();            here value of var_base will be 800 becuase both
    //                                          baseObjectPointer & derivedObjectPointer points to same object ie derivedObject
    derivedObjectPointer->var_derived=250;
    derivedObjectPointer->getData();

    return 0;
}