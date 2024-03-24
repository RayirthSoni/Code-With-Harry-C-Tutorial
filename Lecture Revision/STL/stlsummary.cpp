#include <iostream>
#include <array>
#include <vector>
#include <list>
#include <map>
#include <tuple>

using namespace std;

/*
Array
    at
    []
    front,back
    size
    fill
    swap

Pair
    make_pair()
    first,second

Tuple
    make_tuple()
    get<index>(variable name)

Vector
    at()
    []
    capacity()
    size()
    front()
    back()
    swap()

List
    clear()
    remove(whatever you want to remove)
    sort()
    reverse()
    size()
    push_back(),push_front(),pop_back(),pop_front()

Map
    at()
    []
    size()
    insert()
    clear()
    empty()

*/

class student
{
    int age;
    string name;

public:
    void setData(int a, string n) { age = a, name = n; }
    void getData() { cout << "\nName = " << name << "\nAge = " << age; }
};

int main()
{
    // Array
    cout << "ARRAY\n";
    array<int, 5> a1{1, 2, 3, 4, 5}, a2;
    // Range based loop also in other file
    for (auto i : a1)
        cout << i << " ";
    cout << endl;
    cout << "Using at = " << a1.at(2) << endl;
    cout << "Using [] = " << a1[2] << endl;
    cout << "Using front = " << a1.front() << endl;
    cout << "Using back = " << a1.back() << endl;
    cout << "Using size = " << a1.size() << endl;
    a1.fill(10);
    for (auto i : a1)
        cout << i << " ";
    cout << endl;
    a1 = {1, 2, 3, 4, 5};
    a2 = {6, 7, 8, 9, 10};
    a1.swap(a2);
    for (auto i : a1)
        cout << i << " ";
    cout << endl;
    for (auto i : a2)
        cout << i << " ";

    // Pair
    cout << "\n\nPAIR";
    student s1;
    s1.setData(21, "Rayirth");
    pair<int, int> p1{10, 20};
    pair<string, float> p2;
    p2 = make_pair("Raj", 20.5);
    pair<float, int> p3{100.25, 32};
    pair<int, student> p4{65, s1};
    cout << "\nFirst Element,pair 1 = " << p1.first << "\nSecond Element,pair 2 = " << p1.second << endl
         << "\nFirst Element,pair 1 = " << p2.first << "\nSecond Element,pair 2 = " << p2.second << endl
         << "\nFirst Element,pair 1 = " << p3.first << "\nSecond Element,pair 2 = " << p3.second << endl
         << "\nFirst Element,pair 1 = " << p4.first << "\nSecond Element,pair 2 = ";
    student s2 = p4.second;
    s2.getData();
    pair<int, int> p5{30, 40};
    p1.swap(p5);
    cout << "\nFirst Element,pair 1 = " << p1.first << "\nSecond Element,pair 2 = " << p1.second << endl;

    // Tuple
    cout << "\nTUPLE\n";
    tuple<int, string> t1{101, "Rohan"};
    cout << "From tuple,printing 0th index = " << get<0>(t1) << endl;
    cout << "From tuple,printing 1st index = " << get<1>(t1) << endl;

    // Vector
    cout << "\nVECTOR\n";
    vector<int> v1{1, 2, 3, 4};
    vector<int> v2(5);
    vector<char> v3(5, 'a');
    vector<int> v4{5, 6, 7, 8};
    cout << "Using at() = " << v1.at(2) << endl;
    cout << "Using [] = " << v1[2] << endl;
    cout << "Using capacity() = " << v1.capacity() << endl;
    cout << "Using size() = " << v1.size() << endl;
    cout << "Using front() = " << v1.front() << endl;
    cout << "Using back() = " << v1.back() << endl;
    v1.swap(v4);
    for (auto it : v1)
        cout << it << " ";
    cout << endl;
    for (auto it : v4)
        cout << it << " ";
    cout << endl;
    for (int i = 5; i <= 12; i++)
    {
        cout << v4.capacity() << " ";
        v4.push_back(i);
    }
    cout << "\nEmpty before clear = " << v4.empty() << endl;
    cout << "Using clear operation" << endl;
    v4.clear();
    cout << "Empty after clear = " << v4.empty() << endl;

    // List
    cout << "\nLIST\n";
    list<int> l1{20, 30, 40, 50, 60};
    list<int> l2{45, 32, 12, 54, 34, 28, 98, 54, 87};
    cout << "Size before push pop operations = " << l1.size() << endl;
    l1.push_back(70);
    l1.push_front(10);
    cout << "Size before push pop operations = " << l1.size() << endl; // size will change after push pop operations
    cout << "Using front = " << l1.front() << endl;
    cout << "Using back = " << l1.back() << endl;
    cout << "Before clear operation using empty = " << l1.empty() << endl;
    cout << "Using clear operation" << endl;
    l1.clear();
    cout << "After clear operation using empty = " << l1.empty() << endl;
    l2.sort();
    for (auto it : l2)
        cout << it << " ";
    cout << endl;
    l2.reverse();
    for (auto it : l2)
        cout << it << " ";
    cout << endl;

    // Map
    cout << "\nMAP\n";
    map<int, string> customer;
    customer[100] = "Rayirth";
    customer[200] = "Nikhil";
    customer[150] = "Mohan";
    customer[125] = "Rohit";
    customer[175] = "Vishnu";
    map<int, string> customer2{{25, "Rahul"}, {50, "Raman"}, {75, "Mike"}, {100, "Agrim"}};
    cout << "Using [] = " << customer[100] << endl;
    cout << "Using at() = " << customer.at(100) << endl;
    customer.insert(pair<int, string>{225, "Naman"});
    for (auto it : customer)
        cout << it.first << " " << it.second << endl;
    cout << "Size of customer before clear = " << customer.size() << endl;
    cout << "Checking empty for customer before clear = " << customer.empty() << endl;
    customer.clear();
    cout << "Size of customer after clear = " << customer.size() << endl;
    cout << "Checking empty for customer after clear = " << customer.empty() << endl;

    return 0;
}