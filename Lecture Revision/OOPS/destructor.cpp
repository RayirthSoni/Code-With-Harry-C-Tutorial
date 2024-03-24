#include <iostream>

using namespace std;

class number
{
    static int count;

public:
    number()
    {
        count++;
        cout << "Constructor Invoked\n";
        cout << "For object number " << count << endl;
    }
    ~number()
    {
        cout << "Destructor Invoked\n";
        cout << "For object number " << count << endl;
        count--;
    }
};

int number::count;

int main()
{
    cout<<"This is main function\n";
    cout<<"Creating 2 objects num1,num2\n";
    number num1,num2;
    {
        cout<<"This is block function\n";
        cout<<"Creating 2 more objects\n";
        number num3,num4;
        cout<<"Exiting block function\n";
    }
    cout<<"Creating more objects\n";
    number num3,num4;
    cout<<"Exiting main function\n";
    return 0;
}