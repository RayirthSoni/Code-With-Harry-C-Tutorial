// Header and Operators

// there are two types of header files
// 1.System header files : It comes with compiler.
#include <iostream>
// 2.User definder header files : It is written by programmer.
// #include "this.h"
// #include "this.h" --> this will produce an error if this.h is not present in current directory
using namespace std;
int main()
{
    cout << "Operators in C++" << endl;
    // Arithmetic operators

    int a = 5, b = 4;
    cout << "The value of a is " << a << endl
         << "The value of b is " << b << endl;
    cout << endl
         << endl
         << "Following are Arithmetic Operators" << endl;
    cout << "The value of a + b is " << a + b << endl;
    cout << "The value of a - b is " << a - b << endl;
    cout << "The value of a * b is " << a * b << endl;
    cout << "The value of a / b is " << a / b << endl;
    cout << "The value of a % b is " << a % b << endl;
    cout << "The value of a++ is " << a++ << endl; // pehle print fir increment
    cout << "The value of a-- is " << a-- << endl; // pehle print fir decrement
    cout << "The value of ++a is " << ++a << endl; // pehle increment fir print
    cout << "The value of --a is " << --a << endl; // pehle decrement fir print

    // Assignment Operators --> used to assign values to variable
    // int a=3,b=2;
    // char c='d';

    // Comparison operators
    cout << endl
         << endl
         << "Following are Comparison Operators" << endl;
    cout << "The value of a==b is " << (a == b) << endl;
    cout << "The value of a!=b is " << (a != b) << endl;
    cout << "The value of a>b is " << (a > b) << endl;
    cout << "The value of a<b is " << (a < b) << endl;
    cout << "The value of a>=b is " << (a >= b) << endl;
    cout << "The value of a<=b is " << (a <= b) << endl;

    // Logical Operators
    cout << endl
         << endl
         << "Following are Logical Operators" << endl;
    cout << "The value of logical operator and for ((a==b) && (a<b)) is " << ((a == b) && (a < b)) << endl;
    cout << "The value of logical operator or for ((a==b)||(a>b)) is " << ((a == b) || (a > b)) << endl;
    cout << "The value of logical operator not for (!(a==b)) is " << (!(a == b)) << endl;

    return 0;
}