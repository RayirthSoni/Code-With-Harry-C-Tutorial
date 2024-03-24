#include <iostream>

using namespace std;

class student
{
    int age;
    string name;

public:
    void setData(int a, string n)
    {
        age = a;
        name = n;
    }

    void getData()
    {
        cout << "Age = " << age << endl
             << "Name = " << name << endl;
    }
};

int main()
{
    pair<int, int> p1{10, 20};
    pair<string, int> p2 = {"Rayirth", 21};
    pair<int, float> p3;
    pair<student, int> p4;

    p3 = {100, 200.4};
    student s1;
    s1.setData(12, "Raj");
    p4 = make_pair(s1, 24);

    cout << "Pair 1" << endl
         << p1.first << " " << p1.second << endl;
    cout << "Pair 2" << endl
         << p2.first << " " << p2.second << endl;
    cout << "Pair 3" << endl
         << p3.first << "" << p3.second << endl;
    cout << "Pair 4" << endl;
    s1.getData();
    cout << p4.second << endl;
    return 0;
}