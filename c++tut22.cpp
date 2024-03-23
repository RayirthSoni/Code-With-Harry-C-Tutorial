#include <iostream>
using namespace std;

class Shop
{
    int itemID[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter()
    {
        counter = 0;
    }
    void setPrice();
    void displayPrice();
};

void Shop ::setPrice()
{
    cout << "Enter ID of your item no " << counter + 1 << endl;
    cin >> itemID[counter];
    cout << "Enter Price of your item" << endl;
    cin >> itemPrice[counter];
    counter++;
}

void Shop ::displayPrice()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The Price of item with ID " << itemID[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{
    Shop abc;
    abc.initCounter();
    abc.setPrice();
    abc.setPrice();
    abc.setPrice();
    abc.displayPrice();
    return 0;
}