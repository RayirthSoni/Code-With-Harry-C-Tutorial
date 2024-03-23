#include <iostream>
using namespace std;

// in product function first actual parameters value is copied to formal parameter then formal parameter stored in register then function
// executed then return but in inline int productinl function using inline keyword we can do it such a way that return statement directly
// executed which is quicker also inline is a request to compiler
// inline recommended not be used in recursion,looping,switch statements etc also inline should not be used frequently as it fills cache
// memory so if cache memory gets filled it will lead to crashing of programming
int product(int x, int y)
{
    return x * y;
}

inline int productinl(int k, int l)
{
    static int c=0;                         // static is a keyword, here this line will be executed only once
    c=c+1;                                  // next time when we will run this function,value of c would be retained
    return (k * l) + c;
}

// all constant arguments are declared at last else program might give error
float moneyReceived(int currentMoney, float factor = 1.04)
{
    return currentMoney * factor;
}

int main()
{
    int a, b;
    cout << "First Number : ";
    cin >> a;
    cout << "Second Number : ";
    cin >> b;
    // cout<<"Product of "<<a<<" and "<<b<<"using product is "<<product(a,b)<<endl;
    // cout<<"Product of "<<a<<" and "<<b<<"using product is "<<product(a,b)<<endl;
    // cout<<"Product of "<<a<<" and "<<b<<"using product is "<<product(a,b)<<endl;
    // cout<<"Product of "<<a<<" and "<<b<<"using product is "<<product(a,b)<<endl;
    // cout<<"Product of "<<a<<" and "<<b<<"using product is "<<product(a,b)<<endl;
    // cout<<"Product of "<<a<<" and "<<b<<"using product is "<<product(a,b)<<endl;
    // cout<<"Product of "<<a<<" and "<<b<<"using product is "<<product(a,b)<<endl;
    // cout<<"Product of "<<a<<" and "<<b<<"using product is "<<product(a,b)<<endl;
    // cout<<"Product of "<<a<<" and "<<b<<"using product is "<<product(a,b)<<endl;
    // cout<<"Product of "<<a<<" and "<<b<<"using product is "<<product(a,b)<<endl;
    // cout<<"Product of "<<a<<" and "<<b<<"using product is "<<product(a,b)<<endl;
    // cout<<"Product of "<<a<<" and "<<b<<"using product is "<<product(a,b)<<endl;
    // cout<<"Product of "<<a<<" and "<<b<<"using product is "<<product(a,b)<<endl;

    // cout<<endl<<endl;

    cout<<"Product of "<<a<<" and "<<b<<" using inline prodcuct is "<<productinl(a,b)<<endl;
    cout<<"Product of "<<a<<" and "<<b<<" using inline prodcuct is "<<productinl(a,b)<<endl;
    cout<<"Product of "<<a<<" and "<<b<<" using inline prodcuct is "<<productinl(a,b)<<endl;
    cout<<"Product of "<<a<<" and "<<b<<" using inline prodcuct is "<<productinl(a,b)<<endl;
    cout<<"Product of "<<a<<" and "<<b<<" using inline prodcuct is "<<productinl(a,b)<<endl;
    cout<<"Product of "<<a<<" and "<<b<<" using inline prodcuct is "<<productinl(a,b)<<endl;
    cout<<"Product of "<<a<<" and "<<b<<" using inline prodcuct is "<<productinl(a,b)<<endl;
    cout<<"Product of "<<a<<" and "<<b<<" using inline prodcuct is "<<productinl(a,b)<<endl;
    cout<<"Product of "<<a<<" and "<<b<<" using inline prodcuct is "<<productinl(a,b)<<endl;
    cout<<"Product of "<<a<<" and "<<b<<" using inline prodcuct is "<<productinl(a,b)<<endl;
    cout<<"Product of "<<a<<" and "<<b<<" using inline prodcuct is "<<productinl(a,b)<<endl;

    int money;
    cout<<"Money : ";
    cin >> money;
    cout << "The money deposited was " << money << " now after 1 year money you would get would be : " << moneyReceived(money)<<endl;
    cout << "In case you are VIP The money deposited was " << money << " now after 1 year money you would get would be : " << moneyReceived(money, 1.1)<<endl;

    return 0;
}