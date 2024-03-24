// range based loop and auto keyword
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v1{1, 2, 3, 4, 5};
    for (int i : v1)
    {
        cout << i << " ";
    }
    cout<<endl;

    auto it=v1.begin();
    while(it!=v1.end()){
        cout << *it << " ";
        it++;
    }
    return 0;
}