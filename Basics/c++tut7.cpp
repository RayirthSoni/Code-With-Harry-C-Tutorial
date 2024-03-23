// Reference Variables & Typecasting
#include<iostream>
using namespace std;

int c=44;

// New things learnt here 
// to print a global variable we do cout<<::(variable name)
// global variable declare before main function
// during typecasting in c++ we can do it as 
// for a float c --> int(c)  or (int)c --> both are same 
// sizeof() function gives us size of variable int float etc
// during function overloading we say 34.7f or 34.4F to mention literal as float

int main()
{
    // **********************Build in data types *******************************
    // int a,b,c;
    // cout<<"Enter the value of a : ";
    // cin>>a;
    // cout<<"Enter the value of b : ";
    // cin>>b;
    // c=a+b;
    // cout<<"The local value of c is : "<<c<<endl;
    // cout<<"The global value of c is : "<<::c<<endl;       // This is how we print global variable using scope resolution


// ******************************float , double and long double literals********************
    float f=4.3f;  // we can also use captial f
    long double e=4.3l; // we can also use capital l

    // 34.4 // this will be considered as double literal
    // to mention this as float literal we use f or F as suffix like mentioned above 

    // this suffix is used during functino overlaoding which we will see later
    // cout<<"The value of f is : "<<f<<endl<<"The value of e is : "<<e<<endl;

    // cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
    // cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
    // cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
    // cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
    // cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;

    // ********************Reference Variables***************************
    // ek hi value ko 2 naam se refer
    // Rohan        --->    Monty            --->    Rohu             --->  dangerousCoder
    // real name    --->   nickname at school --->   nickname at home  --->  calls himself so 
    // all names of same person
    // float x=34;
    // float &y=x;
    // cout<<x<<endl<<y<<endl;

    // ********************Typecasting*****************************
    // int t=40;
    // float y=45.45;

    // cout<<"The value of t is "<<t<<endl;
    // cout<<"The value of t is "<<float(t)<<endl;
    // cout<<"The value of t is "<<(float)t<<endl;
    // cout<<"The value of y is "<<y<<endl;
    // cout<<"The value of y is "<<int(y)<<endl;
    // cout<<"The value of y is "<<(int)y<<endl;
    // int k=int(y);
    // cout<<"The expression is "<<t+y<<endl;
    // cout<<"The expression is "<<t+int(y)<<endl;
    // cout<<"The expression is "<<t+(int)y<<endl;
    
    return 0;
}