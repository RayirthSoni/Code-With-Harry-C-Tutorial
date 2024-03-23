#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v{1, 2, 3};
    vector<pair<int, int>> vP{{1, 4}, {2, 5}, {3, 6}};

    // range based loops
    for (int value : v)
    {
        cout << value << " ";
    }
    cout << endl;

    for (pair<int, int> value : vP) // value jo hai usmein copy aata hai vector vala ka
    {
        cout << value.first << " " << value.second << endl;
    }

    // auto keyword
    // jaise neeche initialisation hai iterator ka
    // vector<int>::iterator it;
    // kaafi lambi statement hai iski jagah bina isse initialise kar auto keyword use kar sakte hain
    // vo automatically determine karlega iterator
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}