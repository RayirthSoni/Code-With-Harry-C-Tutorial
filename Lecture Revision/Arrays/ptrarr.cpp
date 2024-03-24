#include <iostream>

using namespace std;

int main()
{
    int i, marks[4] = {10, 20, 30, 40};
    int *k = marks;
    for (i = 0; i < 4; i++)
    {
        cout << "The address of marks[" << i << "] using (marks+i) is " << (marks + i) << endl;
    }
    cout << endl
         << endl;

    for (i = 0; i < 4; i++)
    {
        cout << "The address of marks[" << i << "] using &marks[i] is " << &marks[i] << endl;
    }
    cout << endl
         << endl;

    for (i = 0; i < 4; i++)
    {
        cout << "The address of marks[" << i << "] using (k+i) " << (k + i) << endl;
    }
    cout << endl
         << endl;

    for (i = 0; i < 4; i++)
    {
        cout << "The value at address marks[" << i << "] is using *(marks+i) " << *(marks + i) << endl;
    }
    cout << endl
         << endl;

    for (i = 0; i < 4; i++)
    {
        cout << "The value at address marks[" << i << "] using *(k+i) is " << *(k + i) << endl;
    }
    cout << endl
         << endl;

    for (i = 0; i < 4; i++)
    {
        cout << "The value at address marks[" << i << "] using marks[i] is " << marks[i] << endl;
    }
    return 0;
}