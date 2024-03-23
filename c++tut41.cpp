// Ambiguity Resolution
#include <iostream>

using namespace std;

class base1
{
    int a;

public:
    void greet()
    {
        cout << "How are you?\n";
    }
};

class base2
{
    int s;

public:
    void greet()
    {
        cout << "Kaise ho ?\n";
    }
};

class derived : public base1, public base2
{
    int a;

public:
    void greet()
    {
        base1 ::greet(); // this is how greet for derived class is defined
    }
};

class b
{
public:
    void say()
    {
        cout << "Hello World !\n";
    }
};

class d : public b
{
public:
// here it is not really ambiguous.here derived class say() overwrites base class's say().
    void say()
    {
        cout << "Hola People !\n";
    }
};

int main()
{
    // Ambiguity 1
    base1 b1;
    base2 b2;
    b1.greet();
    b2.greet();

    derived d1;
    // d1.greet(); greet not defined yet for derived class.Since Both classes have greet function it will create ambiguity in order
    // to resolve it we will define greet function for derived class
    d1.greet();

    // Ambiguity 2
    b b3;
    d d2;
    b3.say();
    d2.say();

    return 0;
}