#include <iostream>
using namespace std;
// We can use comparison operators here
// >,<,>=,<=,==,!=
// pair also in c++tut73

class student
{
    int age;
    string name;

public:
    void setData(string n, int a)
    {
        name = n;
        age = a;
    }

    void getData()
    {
        cout << "\nName : " << name
             << "\nAge : " << age;
    }
};

int main()
{
    pair<string, int> p1;
    pair<string, string> p2;
    pair<string, float> p3;
    pair<int, student> p4;
    p1 = make_pair("Rayirth", 21);
    p2 = make_pair("Rahul", "Gupta");
    p3 = make_pair("Nitin", 23.53);
    student s1;
    s1.setData("Raj", 19);
    p4 = make_pair(1, s1);
    cout << "Pair 1" << endl
         << p1.first << " " << p1.second << endl;
    cout << "Pair 2" << endl
         << p2.first << " " << p2.second << endl;
    cout << "Pair 3" << endl
         << p3.first << " " << p3.second << endl;
    student s2 = p4.second;
    cout << "Pair 4" << endl
         << p4.first << " ";
    s2.getData();
    return 0;
}