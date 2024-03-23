// OOPS --> Classes & Objects

// C++ --> initially called --> C with classes by stroutstroup
// class --> extension of structures (in C)
// structures had limitations
//      - Members(variables or values) are public
//      - No methods(functions)
// classes --> structures + more
// classes --> can have methods and properties
// classes --> can make few members as private & few as public
// structures in C++ are typedefed
// You can declare objects along with the class declaration like this :
/*  class employee{
        // class definition
    }ray, rohan, harry */
// ray.salary = 10, makes no sense if salary is private

// Nesting of member functions
// if we write checkBinary function in private then it can't be accessed by main function or anyone
// it can only be accessed within class or by class members(functions)

#include <iostream>
#include <string>
using namespace std;

class binary
{
private:
    string s;
    void checkBinary(void);
public:
    void read();
    // void checkBinary();
    void display();
    void oneComplement();
};

void binary ::read()
{
    cout << "Enter Binary Number : ";
    cin >> s;
}

void binary ::checkBinary()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Not binary number" << endl;
            exit(0);
        }
    }
}



void binary ::display()
{
    checkBinary();
    cout << "Binary number is : ";
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout<<endl;
}

void binary ::oneComplement()
{
    // checkBinary();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

int main()
{
    binary b;
    b.read();
    // b.checkBinary();     can't access this now as checkBinary is private function
    b.display();
    b.oneComplement();
    b.display();
    return 0;
}