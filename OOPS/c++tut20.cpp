#include <iostream>
using namespace std;

// here we are studying classes
// we have 3 private data members(variables) that is a, b & c
// private data members can only be accessed in class not outside by functions etc
// if we try to do it outside like in main function then we get error
// public data members can be accessed outside class
// here in example we have declared one function in class and implemented other
// we can do it anyway declaring both then implementing later or implmenting in class only

class Employee
{
private:
    int a, b, c;

public:
    int d, e;
    void setData(int a1, int b1, int c1); // Declaration
    void getData()
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c << endl;
        cout << "The value of d is " << d << endl;
        cout << "The value of e is " << e << endl;
    }
};

void Employee ::setData(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    Employee Ray;
    // Ray.a=23  --> This will throw error as a is private
    Ray.d = 22;
    Ray.e = 33;
    Ray.setData(1, 2, 3);
    Ray.getData();
    return 0;
}