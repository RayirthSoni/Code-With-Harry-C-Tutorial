// initialization list in constructor
#include <iostream>

using namespace std;

/*
syntax for intialisation list in constructor
constructor(arguments) : initialisation-section
{
    code + assignment
}
*/

class test
{
    // int b;
    // int a;
    int a;
    int b;

public:
    // test(int i, int j) : a(i), b(j)        ---> this will execute
    // test(int i, int j) : a(j), b(i)        ---> this will execute
    // test(int i, int j) : a(i), b(i + j)    ---> this will execute
    // test(int i, int j) : a(i), b(2 * j)    ---> this will execute
    // test(int i, int j) : a(i), b(a + j)    ---> this will execute
    // test(int i, int j) : b(j), a(i)        ---> this will execute
    // test(int i, int j) : b(j), a(b + i)    ---> this will have garbage value for a.because a initialised befor in private section
    //                                             if b would have been initialised before this will execute wihout any problem.
    test(int i,int j) : a(i)
    {
        b=j;
        cout << "Constructor Executed\n";
        cout << "Value of a is " << a << endl
             << "Value of b is " << b << endl;
    }
};

int main()
{
    test ray(4, 6);
    return 0;
}