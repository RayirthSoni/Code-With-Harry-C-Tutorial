#include <iostream>
using namespace std;

class Employee
{
    int id;
    int salary;

public:
    void setID()
    {
        salary = 100;
        cout << "Enter ID of employee : ";
        cin >> id;
    }
    void getID()
    {
        cout << "The ID of this employee is : " << id << endl;
    }
};

int main()
{
    // Employee Ray,Harry,Rohan,Luv;
    // Ray.setID();
    // Ray.getID();
    // suppose there are 100s or more employees we will use arrays

    Employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].setID();
        fb[i].getID();
    }
    return 0;
}