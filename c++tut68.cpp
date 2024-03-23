#include <iostream>
#include <list>

using namespace std;
/*
sort() will sort the list
size() number of elements in list
push_back() add at back
push_front() add at front
pop_back() remove at back
pop_front() remove at front
reverse()    reverses the list typed
remove()     will remove the value in list remove(value which you want to remove).if we type value not present then no change.
if there is value 44 2 times and we type 44 then it will be removed both times
clear()  clears entire list
*/
int main()
{
    list<int> l1 = {11, 22, 33};
    list<string> l2{"Delhi", "Mumbai", "Chennai", "Kolkata"};

    // cout<<l1[0];                                 this will give an error
    list<int>::iterator it = l1.begin();
    while (it != l1.end())
    {
        cout << *it << " ";
        it++;
    }
    l1.pop_back();
    // l1.pop_front();      is karne se front vala jaayega jo yaha pe 11 hai
    cout << endl;
    list<int>::iterator it3 = l1.begin();
    while (it3 != l1.end())
    {
        cout << *it3 << " ";
        it3++;
    }
    cout << "\nTotal values is list are : " << l1.size() << endl;

    cout << "Size of l2 before push_back and push_front is " << l2.size() << endl;
    l2.push_back("Bhopal");
    l2.push_front("UP");
    cout << "Size of l2 after push_back and push_front is " << l2.size() << endl;

    list<string>::iterator it2 = l2.begin();

    while (it2 != l2.end())
    {
        cout << *it2 << " ";
        it2++;
    }

    list<int> l3{21, 35, 11, 53, 15, 86, 56, 76, 24};

    list<int>::iterator it4 = l3.begin();

    cout << endl;
    while (it4 != l3.end())
    {
        cout << *it4 << " ";
        it4++;
    }

    l3.sort();
    cout << endl;
    list<int>::iterator it5 = l3.begin();
    while (it5 != l3.end())
    {
        cout << *it5 << " ";
        it5++;
    }

    l3.reverse();
    cout << endl;
    list<int>::iterator it6 = l3.begin();
    while (it6 != l3.end())
    {
        cout << *it6 << " ";
        it6++;
    }

    // if we want to remove 21 in list
    l3.remove(21);
    cout << endl;
    list<int>::iterator it7 = l3.begin();
    while (it7 != l3.end())
    {
        cout << *it7 << " ";
        it7++;
    }

    l3.clear();
    // nothing will be printed
    cout << endl;
    list<int>::iterator it8 = l3.begin();
    while (it8 != l3.end())
    {
        cout << *it8 << " ";
        it8++;
    }

    return 0;
}