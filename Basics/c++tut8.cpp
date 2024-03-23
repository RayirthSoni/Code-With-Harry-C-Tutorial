#include<iostream>
#include<iomanip>
using namespace std;

// NEW THINGS LEARNT
// we use const keyword to declare a variable as constant
// setw is present in iomanip this is used to set width for a literal
// operator precedence

int main()
{
    // Constants
    // int a=45;
    // cout<<"The value of a was : "<<a<<endl;
    // a=20;
    // cout<<"The value of a is : "<<a<<endl;
    // const int a=23;
    // cout<<"The value of constant a is : "<<a<<endl;
    // a=21;                                           // We will get an error since a is constant
    // cout<<"The new value of a is : "<<a<<endl;

    // Manipulators
    // There are 2 manipulators endl and setw() --> setw is present in iomanip
    int b=2,c=23,d=234,e=2345,f=23456;
    cout<<"The value of b without setw is : "<<b<<endl;     
    cout<<"The value of c without setw is : "<<c<<endl;   
    cout<<"The value of d without setw is : "<<d<<endl;  
    cout<<"The value of e without setw is : "<<e<<endl;  
    // cout<<"The value of f without setw is : "<<f<<endl;

    cout<<endl<<endl;

    cout<<"The value of b with setw is :"<<setw(4)<<b<<endl;     //will give space of 3 here as b already has 1
    cout<<"The value of c with setw is :"<<setw(4)<<c<<endl;    // will give space of 2 here as c already has 2
    cout<<"The value of d with setw is :"<<setw(4)<<d<<endl;   //  will give space of 1 here as d already has 3
    cout<<"The value of e with setw is :"<<setw(4)<<e<<endl;  //   will give space of 0 here as e already has 4
    // cout<<"The value of f with setw is : "<<setw(4)<<f<<endl;

    // *****************setw ensures here whatever we print get space of 4.***************
    // setw--->set width

    // Operators Precedence
    // int c=((((a*b)+d)-23)+222);
    // check operator precedence and associtivity
    return 0;
}