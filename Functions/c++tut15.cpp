#include<iostream>
using namespace std;

// int sum(int num1,int num2)
// {
//     int sum=num1+num2;
//     return sum;
// }


// this is function protoype if we type function after main function we tell the compiler certain function would be used like here,
int sum(int c,int d);         // --> Acceptable
// int sum(int,int);             --> Acceptable
// int sum(int d,e);             --> Not Acceptable
// void print(void);              --> Acceptable
void print();                  // --> Acceptable

int main()
{
    int a,b;
    cout<<"First Number : ";
    cin>>a;
    cout<<"Second Number : ";
    cin>>b;
    // a and b are actual parameters
    cout<<"Sum is : "<<sum(a,b)<<endl;
    print();
    return 0;
}

int sum(int num1,int num2)
{
    // formal parameters num1 and num2 will be taking values from actual parameters a & b
    int sum=num1+num2;
    return sum;
}

void print(){
    cout<<"Hello,World";
}