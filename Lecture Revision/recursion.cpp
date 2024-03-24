#include<iostream>
using namespace std;

int factorialRecursion(int n){
    if(n<=1){
        return 1;
    }
    return n*factorialRecursion(n-1);
}

int fibonacciRecursion(int n1,int n2,int t){
    if(t==1){
        return n1;
    }
    if(t==2){
        return n2;
    }
    return fibonacciRecursion(n1,n2,t-1)+fibonacciRecursion(n1,n2,t-2);
}

int main()
{
    // factorial
    int num;
    cout<<"Enter Number : ";
    cin>>num;
    cout<<factorialRecursion(num)<<endl<<endl;

    // fibonacci
    int terms,num1,num2;
    cout<<"Enter Number 1 : ";
    cin>>num1;
    cout<<"Enter Number 2 : ";
    cin>>num2;
    cout<<"Enter Term to Print : ";
    cin>>terms;
    cout<<fibonacciRecursion(num1,num2,terms)<<endl<<endl;

    return 0;
}