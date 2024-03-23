#include<iostream>
using namespace std;

void swap(int x,int y)
{
    int temp=x;
    x=y;
    y=temp;
}

void swapPointer(int* x,int* z)
{
    int temp=*x;
    *x=*z;
    *z=temp;
}

void swapReference(int &a,int &b)
{
    int c=a;
    a=b;
    b=c;
}

int main()
{
    int a,b;
    cout<<"Enter first number : ";
    cin>>a;
    cout<<"Enter second number : ";
    cin>>b;
    cout<<"First Number : "<<a<<" Second Number : "<<b<<endl;
    swap(a,b);                                                                                      // wont work
    cout<<"After swap function"<<endl<<"First Number : "<<a<<" Second Number : "<<b<<endl;
    swapPointer(&a,&b);                                                                             // will work
    cout<<"After swapPointer function"<<endl<<"First Number : "<<a<<" Second Number : "<<b<<endl;
    swapReference(a,b);                                                                             // will work
    cout<<"After swapRefernce function"<<endl<<"First Number : "<<a<<" Second Number : "<<b<<endl;
    return 0;
}