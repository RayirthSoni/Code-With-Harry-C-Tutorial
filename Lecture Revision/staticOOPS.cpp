#include <iostream>
using namespace std;

class employee
{
    int id;
    static int count;

public:
    void setData()
    {
        cout<<"Enter ID of employee : ";
        cin>>id;
        count++;
    }

    void getData()
    {
        cout<<"The id of employee is : "<<id<<endl;
    }

    static void getCount()
    {
        cout<<"The count of employee is : "<<count<<endl;
    }

};

int employee::count=100;

int main()
{
    employee ray, nikhil, rohan;

    ray.setData();
    ray.getData();
    employee::getCount();

    nikhil.setData();
    nikhil.getData();
    employee::getCount();

    rohan.setData();
    rohan.getData();
    employee::getCount();

    return 0;
}