// input and output

#include<iostream>
using namespace std;

int main()
{
    int num1,num2;
    cout<<"Enter value of num1 : ";      // << this is insertion operator
    cin>>num1;                          //  >> this is extraction operator
    cout<<"Enter value of num2 : ";    //   << this is insertion operator
    cin>>num2;                        //    >> this is extraction operator
    cout<<"The sum is "<<(num1+num2);
    return 0;
}