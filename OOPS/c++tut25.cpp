// Properties of friends functions
// 1. Not in scope of class
// 2. Since it is not in scope of class, it cannot be called from object of that class. Example - c1.sumComplex() --> invalid
// 3. Can be invoked without the help of object
// 4. Usually contains objects as arguments
// 5. Can be declared inside public or private sectors of class
// 6. It cannot access the members directly by their names and need object_name.member_name to access any member.
// 7. It is declared inside class but defined outside
// 

#include <iostream>
using namespace std;

class complex
{
private:
    int a;
    int b;

public:
    void setData(int real, int imaginary)
    {
        a = real;
        b = imaginary;
    }

    // below line means that non-member --> sumComplex function is allowed to anything with private members
    friend complex sumComplex(complex object1, complex object2);

    void printNumber()
    {
        cout << "The Number is " << a << " + " << b << "i" << endl;
    }
};

complex sumComplex(complex value1, complex value2)
{
    complex value3;
    // value3.a=value1.a+value2.a;
    // value3.b=value1.b+value2.b;
    value3.setData((value1.a + value2.a), (value1.b + value2.b));
    return value3;
}

int main()
{
    complex c1, c2, c3;

    c1.setData(4, 5);
    c1.printNumber();

    c2.setData(5, 4);
    c2.printNumber();

    c3 = sumComplex(c1, c2);
    c3.printNumber();

    return 0;
}