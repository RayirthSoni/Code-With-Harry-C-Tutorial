// Global and Local Variables

#include <iostream>
using namespace std;
// this is how we declare global variable
int rs = 25;
void print()
{
    cout << rs;
}
int main()
{
    int a = 10, b = 15;
    float pi = 3.14;
    int rs = 2;       // local variable gets preference over global variable
    char c = 'e';     // can't put 2 letter in char only can have 1
    bool flag = true; // for true it will print 1 and for false will print 0
    cout << "The value of a : " << a << "\nThe value of b : " << b << "\nThe value of pi : " << pi << "\nThe value of character : " << c << "\nThe value of flag is : " << flag << "\nThe value of local rs : " << rs << "\nThe value of global rs : ";
    print();
    return 0;
}