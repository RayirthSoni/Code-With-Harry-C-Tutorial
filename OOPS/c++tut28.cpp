#include <iostream>
using namespace std;

// Constructor Properties
// 1. It should be declared in public section of class.
// 2. They are automatically invoked when object is created.
// 3. They cannot return values and do not have return types.
// 4. It can have default arguments.
// 5. We cannot refer to their address.

class complex
{
    int a;
    int b;

public:
    // Creating a Constructor
    // Constructor is a special member function with same name as that of class.
    // It is used to initialize objects of its class.
    // It is automatically invoked when an object is created.
    // here constructor is helpful as generally what we were doing was creating objects then using set data functions
    // complex c1;
    // c1.setData();
    // like this but now as object is created setData() function automatically invoked
    
    complex(void);                                 // Constructor Declaration

    void getData()
    {
        cout << "Complex Number = " << a << " + " << b << "i" << endl;
    }
};

complex::complex(void)                  // This is a default constructor as it takes no parameter
{
    // here we could have mentioned a as default by taking a=2 then all complex number would have been
    // 2 + 5i
    // but we haven't done so what we have done is we have taken user input of a and b default
    cout<<"Enter a : ";
    cin >> a;
    b = 5;
}

int main()
{
    complex c1, c2, c3;
    c1.getData();
    c2.getData();
    c3.getData();
    return 0;
}