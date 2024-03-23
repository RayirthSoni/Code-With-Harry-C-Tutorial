#include<iostream>
using namespace std;

int fibonacci(int n)
{
    if(n<2){
        return n;
    }
    return (fibonacci(n-1)+fibonacci(n-2));
}

int factorial(int n)
{
    if(n<=1){
        return 1;
    }
    return n*factorial(n-1);
}

// Step by step process for factorial of 5
// factorial(5) = 5*factorial(4)
// factorial(5) = 5*4*factorial(3)
// factorial(5) = 5*4*3*factorial(2)
// factorial(5) = 5*4*3*2*factorial(1)
// factorial(5) = 5*4*3*2*1
// factorial(5) = 120

int main()
{
    int num;
    // cout<<"Enter number whose factorial is to be calculated : ";
    // cin>>num;
    // cout<<"Factorial for "<<num<<" is "<<factorial(num)<<endl;
    int term;
    cout<<"Term to print : ";
    cin>>term;
    cout<<term<<" term of fibonacci series is : "<<fibonacci(term);
    return 0;
}