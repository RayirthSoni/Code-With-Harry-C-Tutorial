#include<iostream>

using namespace std;

template<class t>
t average(t num1,t num2)
{
    t ans=num1+num2;
    return ans;
}

template<class t>
void swapp(t &num1,t &num2)
{
    t temp=num1;
    num1=num2;
    num2=temp;
}



int main()
{
    cout<<average(19,29)<<endl;
    cout<<average(10.545,20.5231)<<endl;

    int a,b;
    cin>>a>>b;
    cout<<a<<endl<<b<<endl;
    swapp(a,b);
    cout<<a<<endl<<b;
    return 0;
}