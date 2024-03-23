#include <iostream>
using namespace std;

// static variable default value 0
// static lagane se saare variable ek he count ko share kar rahe hain
// agar hamne static vale ke value 100 se ya kisi aur number se shuru karni hai tooh value ham int employee::count mein likhenege
// jaise idhar kiya hua hai
// static functions sirf static members ya static data functions he access kar sakte hain
// static variable class ka variable hota hai naaki kisi object ka usse bahar define karna hota hai jaisa yahan pe kiya aur fir class
// mein declare
// agar function static nahi hai tooh
// void getCount()
// {
//      code
// }
// main()
// {
//      suppose object is a1
//      a1.getCount();
// }

class Employee
{
    int ID;
    static int count; // declaration
public:
    void setData()
    {
        cout << "Enter ID of the employee : ";
        cin >> ID;
        count++;
    }
    void getData()
    {
        cout << "The ID of the employee is " << ID << " and this is employee number " << count << endl;
    }
    static void getCount()
    {
        // cout<<ID;        will throw an error
        cout << "The value of count is " << count << endl;
    }
};

int Employee::count = 1000; // Definition.     iski memory class se related hai naaki object se

int main()
{
    Employee Ray, Ritik, Harry;
    // Ray.ID=1
    // Ray.count=1              Not possible as they are private

    // agar static variable public hota naaki private
    // Employee::count=2;

    Ray.setData();
    Ray.getData();
    Employee::getCount();

    Harry.setData();
    Harry.getData();
    Employee::getCount();

    Ritik.setData();
    Ritik.getData();
    Employee::getCount();

    return 0;
}