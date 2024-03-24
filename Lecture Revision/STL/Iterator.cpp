// via for loop
// iterator for loop,while loop
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v1{1, 2, 3, 4, 5};
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;

    vector<int>::iterator it = v1.begin();
    for (it = v1.begin(); it != v1.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    vector<pair<int, int>> vp{{1, 5}, {2, 6}, {3, 7}, {4, 8}};
    vector<pair<int, int>>::iterator it2 = vp.begin();
    for (it2 = vp.begin(); it2 != vp.end(); it2++)
    {
        cout << (*it2).first << " " << (*it2).second << endl;
        cout << it2->first << " " << it2->second << endl;
    }

    return 0;
}