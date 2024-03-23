// new and delete
#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    int *ptr = &a;
    cout << "The value at address a is " << *ptr << endl;
    // changing value at ptr
    *ptr = 900;
    cout << *ptr << endl;

    // dynamically allocating memory to int
    // int *b=new int(25);
    float *b = new float(25.23);
    cout << "The value of b is " << *b << endl;
    delete b;

    int *arr = new int[4];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    cout << "The value at arr[0] is " << arr[0] << endl
         << "The value at arr[1] is " << arr[1] << endl
         << "The value at arr[2] is " << arr[2] << endl
         << "The value at arr[3] is " << arr[3] << endl;
    delete[] arr;

    return 0;
}