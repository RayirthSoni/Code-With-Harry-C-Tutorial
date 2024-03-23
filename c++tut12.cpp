#include<iostream>
using namespace std;

int main()
{
    // What is a pointer ? ---->  Data type which holds address of other data types
    int a=6;
    int* b;
    b=&a;

    // & --> Address Operator
    // & --> (address of)
    cout<<"The address of a : "<<&a<<endl;
    cout<<"The address of a : "<<b<<endl;

    // * --> Dereference Operator
    // * --> (value at)
    cout<<"The value at address b : "<<*b<<endl;
    cout<<"The value at address b : "<<a<<endl;


    // Pointer to Pointer
    int** c=&b;
    cout<<"The address of b : "<<&b<<endl;
    cout<<"The address of b : "<<c<<endl;

    cout<<"The value at address c : "<<*c<<endl;

    cout<<"The value at address value at address c : "<<**c<<endl;

    // here
    // &b=c
    // *c=b
    // **c=*b=a
    return 0;
}