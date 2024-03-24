#include <iostream>

using namespace std;

class bankDeposit
{
    int principal;
    int years;
    float rateInterest;
    float returnValue;

public:
    bankDeposit() {}
    bankDeposit(int, int, int);
    bankDeposit(int, int, float);
    void getData()
    {
        cout << "The principal amount was " << principal << " and its rate of interest was " << rateInterest << " and after " << years
             << " years its returnValue would be " << returnValue << endl;
    }
};

bankDeposit::bankDeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    rateInterest = float(r) / 100;
    returnValue = p;
    for (int i = 1; i <= years; i++)
    {
        returnValue = principal * (1 + rateInterest);
    }
}

bankDeposit::bankDeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    rateInterest = r;
    returnValue = principal;
    for (int i = 1; i <= years; i++)
    {
        returnValue = principal * (1 + rateInterest);
    }
}

int main()
{   
    bankDeposit bd1,bd2(100,4,2),bd3(100,4,.02f);
    bd1.getData();
    bd2.getData();
    bd3.getData();
    return 0;
}