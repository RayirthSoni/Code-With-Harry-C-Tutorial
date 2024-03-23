#include <iostream>
using namespace std;

class B;

class A
{
    int data;
    friend void swapReference(A &, B &);
    friend void swap(A, B);
    friend void swapPointer(A *, B *);

public:
    void setData()
    {
        cout << "Enter Value of Object : ";
        cin >> data;
    }

    void getData()
    {
        cout << "Value of class A Object is : " << data << endl;
    }
};

class B
{
    int num;
    friend void swapReference(A &, B &);
    friend void swap(A, B);
    friend void swapPointer(A *, B *);

public:
    void setNum()
    {
        cout << "Enter Value of Object : ";
        cin >> num;
    }

    void getNum()
    {
        cout << "Value of class B Object is : " << num << endl;
    }
};

void swapReference(A &o1, B &o2)
{
    int temp = o1.data;
    o1.data = o2.num;
    o2.num = temp;
}

void swap(A o1, B o2)
{
    int temp = o1.data;
    o1.data = o2.num;
    o2.num = temp;
}

void swapPointer(A *o1, B *o2)
{
    int temp = o1->data;
    o1->data = o2->num;
    o2->num = temp;
}

int main()
{
    A o1;
    B o2;

    o1.setData();
    o2.setNum();

    cout << endl;

    o1.getData();
    o2.getNum();

    cout << endl
         << "After swap Function" << endl;
    swap(o1, o2);
    o1.getData();
    o2.getNum();

    cout << endl
         << "After swapReference Function" << endl;
    swapReference(o1, o2);
    o1.getData();
    o2.getNum();

    cout << endl
         << "After swapPointer Function" << endl;
    swapPointer(&o1,&o2);
    o1.getData();
    o2.getNum();

    return 0;
}