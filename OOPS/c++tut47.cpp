// Array of objects using pointers
#include <iostream>

using namespace std;

class shopItem
{
    int id;
    float price;

public:
    void setData(int a,float b)
    {
        id=a;
        price=b;
    }
    void getData()
    {
        cout << "Price of item, having itemID " << id << " is " << price << endl;
    }
};

int main()
{
    int size = 4;
    shopItem *s = new shopItem[size];
    shopItem *stemp = s;
    int p;
    float q;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter ID and price of item Number "<<i+1<<endl;
        cin>>p>>q;
        s->setData(p,q);
        s++;
    }
    for (int i = 0; i < size; i++)
    {
        cout<<"Item Number "<<i+1<<endl;
        stemp->getData();
        stemp++;
    }
    return 0;
}