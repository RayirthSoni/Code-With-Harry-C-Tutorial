#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<int, string> coder{{100, "Rayirth"}, {122, "Nidhi"}, {152, "Karan"}, {105, "Ritik"}, {175, "Vicky"}};
    auto it2 = coder.begin();
    while (it2 != coder.end())
    {
        cout << it2->first << " " << it2->second << " ";
        it2++;
    }
    cout << endl;

    cout << "Size is " << coder.size() << endl;

    coder.clear();
    auto it = coder.begin();
    while (it != coder.end())
    {
        cout << it->first << "" << it->second << " ";
        it++;
    }
    cout << endl;

    coder.insert(pair<int, string>(200, "Saurabh"));
    auto it3 = coder.begin();
    while (it3 != coder.end())
    {
        cout << it3->first << " " << it3->second << " ";
        it3++;
    }
    cout << endl;

    return 0;
}