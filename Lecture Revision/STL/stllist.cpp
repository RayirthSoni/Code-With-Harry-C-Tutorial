#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<string> l1{"New Delhi", "Mumbai", "Chennai", "Kolkata"};

    list<string>::iterator it = l1.begin();
    while (it != l1.end())
    {
        cout << *it << " ";
        it++;
    }
    cout << endl;

    l1.push_back("Bhopal");
    l1.push_front("UP");
    auto it2 = l1.begin();
    while (it2 != l1.end())
    {
        cout << *it2 << " ";
        it2++;
    }
    cout<<endl;

    l1.pop_back();
    l1.pop_front();
    auto it3 = l1.begin();
    while (it3 != l1.end())
    {
        cout << *it3 << " ";
        it3++;
    }
    cout<<endl;

    cout<<"Size of list is : "<<l1.size()<<endl;

    cout<<"Sorting the list : ";
    l1.sort();
    auto it4=l1.begin();
    while(it4!=l1.end())
    {
        cout<<*it4<<" ";
        it4++;
    }
    cout<<endl;

    l1.remove("New Delhi");
    auto it6=l1.begin();
    while(it6!=l1.end())
    {
        cout<<*it6<<" ";
        it6++;
    }
    cout<<endl;

    l1.reverse();
    auto it7=l1.begin();
    while(it7!=l1.end())
    {
        cout<<*it7<<" ";
        it7++;
    }
    cout<<endl;


    l1.clear();
    auto it5=l1.begin();
    while(it5!=l1.end())
    {
        cout<<*it5<<" ";
        it5++;
    }
    cout<<endl;
    return 0;
}