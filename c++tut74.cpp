// iterators
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v{2, 3, 4, 5, 6, 7};
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    vector<int>::iterator it = v.begin();
    cout << *(it) << endl;
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;

    vector<pair<int, int>> vp{{1, 2}, {3, 4}, {5, 6}};
    vector<pair<int, int>>::iterator it2;
    for (it2 = vp.begin(); it2 != vp.end(); it2++)
    {
        cout << (*it2).first << " " << (*it2).second << endl;
        cout << it2->first << " " << it2->second << endl;
    }
    return 0;
}