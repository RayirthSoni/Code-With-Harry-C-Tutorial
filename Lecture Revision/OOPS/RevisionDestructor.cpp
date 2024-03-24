#include <iostream>

using namespace std;

class num
{
    static int count;

public:
    num()
    {
        count++;
        cout << "Constructor invoked.This is object count " << count << endl;
    }
    ~num()
    {
        cout << "Destructor invoked.This is object count " << count << endl;
        count--;
    }
};

int num::count;

int main()
{
    cout << "This is main function\n";
    cout << "Creating n1\n";
    num n1;
    {
        cout << "Entering block function\n";
        cout << "Creating n2 & n3\n";
        num n2, n3;
        cout << "Exiting block function\n";
    }
    cout << "Creating more objects n3 & n4\n";
    num n3, n4;
    cout << "Exiting block function\n";
    return 0;
}