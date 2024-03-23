// protected access modifier
// ye private se similar hota hai but inheritable hota hai
#include<iostream>
using namespace std;

class base{
    protected:
    int a;
    private:
    int b;
};

/*
                        Public derivation           Private derivation          Protected derivation
1.Private members       not inheritable             not inheritable             not inheritable
2.Protected members     protected                   private                     protected
3.Public members        public                      private                     protected
*/

class derived:base{

};

int main()
{
    base b;
    derived d;
    // cout<<d.a;           will not work since a is protected
    return 0;
}