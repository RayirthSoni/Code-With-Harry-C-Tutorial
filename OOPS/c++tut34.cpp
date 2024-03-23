// destructor
// destructor never takes an argument nor does it return value
// destructor memory free karta hai dynamic initialise objects ki.
#include<iostream>

using namespace std;

class number
{
    static int count;
    public:
    number()
    {
        count++;
        cout<<"Constructor Invoked for object number "<<count<<endl;
    }

    ~number()       // destructor declared this way
    {
        cout<<"Destructor Invoked for object number "<<count<<endl;
        count--;
    }
};

int number::count;

int main()
{
    cout<<"We are inside our main function"<<endl;
    cout<<"Creating first object num1"<<endl;
    number num1;
    {
        cout<<"Entering Block"<<endl;
        cout<<"Creating 2 more objects num2 & num3"<<endl;
        number num2,num3;
        cout<<"Exiting Block"<<endl;
    }
    cout<<"Back to main function"<<endl;
    return 0;
}