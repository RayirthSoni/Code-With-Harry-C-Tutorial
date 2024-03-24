#include <iostream>

using namespace std;
class student
{
private:
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
        cout << "\nAge = " << age
             << "\nName = " << name;
    }
};
int main()
{
    pair<int, int> p1;
    pair<int, string> p2;
    pair<float, int> p3;
    pair<int, student> p4;
    
    student s;
    s.setData(20,"Rayirth");

    p1 = make_pair(10, 20);
    p2 = make_pair(67, "Nitin");
    p3 = make_pair(45.5, 10);
    p4 = make_pair(100,s);


    cout << "\nFirst Element in p1 = " << p1.first << "\nSecond element in p1 =" << p1.second;
    cout << "\nFirst Element in p2 = " << p2.first << "\nSecond element in p2 =" << p2.second;
    cout << "\nFirst Element in p3 = " << p3.first << "\nSecond element in p3 =" << p3.second;
    cout << "\nFirst Element in p4 = " << p4.first << "\nSecond element in p3 =";
    s=p4.second;
    s.getData();
    return 0;
}