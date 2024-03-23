// this is array in stl
#include <iostream>
#include <array>
// at()
// []
// front,back
// fill
// swap
// size
// begin,end ---> used with iterators, begin points to first element and end points to element next to last element
using namespace std;

int main()
{
    // array<data type,size of array> object name
    array<int, 5> obj = {11, 22, 33, 44, 55}; // array can be initialised while declaration

    cout << "Using at(), " << obj.at(2) << endl; // we will get 33
    // if given range is greater than array size, out of range exception is thrown.

    cout << "Using []," << obj[2] << endl; // this will be same as at

    cout << "Using front(), " << obj.front() << endl; // we will get first element

    cout << "Using back(), " << obj.back() << endl; // we will get last element. agar array ka size 7 ya 8 hota aur agar hamne
    // 5 ya 6 he index bhare hote tooh back mein 0 milta output mein

    // here we have created another object and if we want to fill it with same value we use fill()
    array<int, 9> obj2;
    obj2.fill(10); // all index will be filled with 10
    for (int i = 0; i < 9; i++)
    {
        cout << obj2[i] << endl;
    }

    // if we want to swap 2 arrays
    // both arrays must be of same size and same type
    array<int, 5> obj3 = {10, 20, 30, 40, 50};
    array<int, 5> obj4 = {1, 2, 3, 4, 5};
    obj3.swap(obj4);
    for (int i = 0; i < 5; i++)
    {
        cout << obj3[i] << endl;
    }
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << obj4[i] << endl;
    }
    cout << endl;

    // using size function we determine size of array
    // if size of array is 10 and we fill only till 5 we will still get size as 10
    cout << "Using size, " << obj.size() << endl;

    return 0;
}