// Templates with Multiple Parameters

/*
class template with multiple parameter
template<class T1,class T2, ...(comma seperated)>
class nameOfClass{
    code;
};
*/
#include <iostream>

using namespace std;

template <class T1, class T2>
class myClass
{
    T1 data1;
    T2 data2;

public:
    myClass(T1 d, T2 c) : data1(d), data2(c) {}
    void getData()
    {
        cout << "Data1 = " << data1 << endl
             << "Data2 = " << data2 << endl
             << endl;
    }
};

int main()
{
    // myClass mc(10, 'c');
    // mc.getData();

    myClass<int, char> obj(10, 'c');
    obj.getData();

    myClass<int, int> obj2(102, 98);
    obj2.getData();

    myClass<float, char> obj3(10.723, 'c');
    obj3.getData();
    return 0;
}