#include <iostream>
#include <array>

using namespace std;

// at()
// []
// front,back
// fill()
// swap()
// size()
// begin,end --> used with iterators

int main()
{
    array<int, 5> obj{1, 2, 3, 4, 5};

    cout << "Using at(), " << obj.at(2) << endl;
    cout << "Using [], " << obj[2] << endl;
    cout << "Using front()," << obj.front() << endl;
    cout << "Using back()," << obj.back() << endl;

    array<float, 10> obj2;
    obj2.fill(5.5);
    for (int i = 0; i < 10; i++)
    {
        cout << obj2.at(i) << " ";
    }
    cout<<endl;

    array<int,5> obj3={1,2,3,4,5};
    array<int,5> obj4={6,7,8,9,10};
    obj3.swap(obj4);
    for (int i = 0; i < 5; i++)
    {
        cout << obj3.at(i) << " ";
    }
    cout<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout << obj4.at(i) << " ";
    }
    cout<<endl;

    cout << "Using size(), " << obj.size() << endl;

    return 0;
}