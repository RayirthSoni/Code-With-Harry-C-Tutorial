// code with harry video 36 inheritance theory
// there are many types of inheritance
// single inheritance -  derived class from only one base class.
// multiple inheritance - derived class with more than one base class.
// hieararchial inheritance - several derived from single base.
// multilevel inheritance - deriving a class from already derived class.
// hybird inheritance - multilevel and multiple inheritance combination.

// INHERITANCE SYNTAX & VISIBILTY MODE
// defualt constructor isliye daala kyuki jab derive class banate hai automatically base class ka constructor call hota hai
// agar bina default constructor ki call karenge tooh error throw hoga
#include <iostream>

using namespace std;

// base class
class employee
{
public:
    int id;
    float salary;
    employee() {}
    employee(int ID)
    {
        id = ID;
        salary = 34;
    }
};

/* derived class syntax
class {{derived class name}} : {{visibility mode}} {{base class name}}
{
    code
}
NOTE :
1. Default visibilty mode private.
2. Private Visibilty Mode : Public members of base class becomes Private members of derived class.
3. Public Visibilty Mode : Public members of base class becomes Public members of derived class.
4. Private members are never inherited
*/

// creating a programmer class derived from employee base class
class programmer : public employee
{
public:
    int languageCode = 98;
    programmer(int ID)
    {
        id = ID;
    }
    void getData()
    {
        cout << "ID of programmer = " << id << endl;
    }
};

int main()
{
    employee rayirth(1), rohan(2), raj(3);
    cout << "Salary of Rayirth is " << rayirth.salary << endl;
    cout << "Salary of Rohan is " << rohan.salary << endl;
    cout << "Salary of Raj is " << raj.salary << endl;
    programmer ritik(88);
    cout << ritik.languageCode << endl;
    cout << ritik.id << endl;
    ritik.getData();
    return 0;
}