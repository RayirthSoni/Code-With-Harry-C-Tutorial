#include <iostream>

using namespace std;

int main()
{
    int a;
    cout << "Enter a : ";
    cin >> a;

    int* b;
    b=&a;

    cout<<"Value of a = "<<a<<endl;
    cout<<"Using *,value at a = "<<*b<<endl;
    cout<<"Address of a is"<<&a<<endl;
    cout<<"Address of a is using b"<<b<<endl;

    int **c;
    c=&b;
    cout<<"Address of b is "<<&b<<endl;
    cout<<"Address of b using c is "<<*c<<endl;
    return 0;
}