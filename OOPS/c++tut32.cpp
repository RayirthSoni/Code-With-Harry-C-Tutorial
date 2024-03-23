// dynamic initialisation of objects using constructors
#include <iostream>
#include <cmath>
using namespace std;

class bankDeposit
{
    int principal;
    int years;
    float interestRate;
    float returnValue;

public:
    bankDeposit(){}
    bankDeposit(int, int, int);
    bankDeposit(int, int, float);
    void getData()
    {
        cout << "Principal Amount is " << principal << " and after " << years << " years its returnValue at interestRate " << interestRate << " would be " << returnValue << endl;
    }
};

bankDeposit::bankDeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    interestRate = (float)r / 100;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}

bankDeposit::bankDeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;
    for (int i = 1; i <= y; i++)
    {
        returnValue = returnValue * (1 + r);
    }
}

int main()
{
    int princpl, yr, ratInt;
    float ratFlot;
    cout << "Principal : ";
    cin >> princpl;
    cout << "Years : ";
    cin >> yr;
    cout << "Rate Integer : ";
    cin >> ratInt;
    cout << "Rate Float : ";
    cin >> ratFlot;
    bankDeposit bd1(princpl, yr, ratInt);
    bd1.getData();
    bankDeposit bd2(princpl, yr, ratFlot);
    bd2.getData();
    return 0;
}