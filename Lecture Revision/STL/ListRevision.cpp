#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> l1{20, 30, 40, 50, 60};
    cout << "Using size for l1, = " << l1.size();
    list<int>::iterator it = l1.begin();
    while (it != l1.end())
    {
        cout << *it << endl;
        it++;
    }
    cout << endl;
    cout << "Using push_front here, = " << endl;
    l1.push_front(10);
    cout << "Using push_back here, = " << endl;
    l1.push_back(70);
    list<int>::iterator it2 = l1.begin();
    while (it2 != l1.end())
    {
        cout << *it2 << endl;
        it2++;
    }

    list<int> l2{21,11,75,65,32,45,77};
    l2.sort();
    list<int>::iterator it3 = l2.begin();
    while (it3 != l2.end())
    {
        cout << *it3 << endl;
        it3++;
    }
    l2.reverse();
    list<int>::iterator it4 = l2.begin();
    while (it4 != l2.end())
    {
        cout << *it4 << endl;
        it4++;
    }
    return 0;
}