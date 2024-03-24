/*
Pair Revision --> Array of pair,swapping them,reference
Vector Revision and More Topics --> vector of pairs,array of vectors,vector of vector
*/
#include <iostream>
#include <vector>

using namespace std;

class student
{
    int age;
    string name;

public:
    void setData(int a, string n) { age = a, name = n; }
    void getData() { cout << "\nName = " << name << "\nAge = " << age << endl; }
};

void printVector(vector<int> v)
{
    cout<<"Size of vector is "<<v.size()<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

void printVector2(vector<pair<int, int>> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].first << " " << v[i].second << endl;
    }
    cout << endl;
}

int main()
{
    student s1;
    s1.setData(21, "rayirth");
    pair<int, int> p1{1, 2};
    pair<int, string> p2{20, "Ritik"};
    pair<int, float> p3{5, 5.5};
    pair<int, student> p4{20, s1};
    cout << "\nFirst Element of pair 1 = " << p1.first << "\nSecond Element of pair 1 = " << p1.second;
    cout << "\nFirst Element of pair 2 = " << p2.first << "\nSecond Element of pair 2 = " << p2.second;
    cout << "\nFirst Element of pair 3 = " << p3.first << "\nSecond Element of pair 3 = " << p3.second;
    cout << "\nFirst Element of pair 4 = " << p4.first << "\nSecond Element of pair 4 = ";
    student s2 = p4.second;
    s2.getData();

    pair<int, int> &p1ref = p1;
    p1ref.first = 200;
    cout << "\nFirst Element of pair 1 = " << p1.first << "\nSecond Element of pair 1 = " << p1.second << endl;

    pair<int, int> parr[3];
    parr[0] = {1, 2};
    parr[1] = {3, 4};
    parr[2] = {5, 6};
    swap(parr[0], parr[2]);
    for (auto i : parr)
    {
        cout << i.first << " " << i.second << endl;
    }

    vector<int> v1;
    int a, size, b;
    cout << "Enter Size : ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin >> a;
        v1.push_back(a);
    }
    printVector(v1);

    vector<pair<int, int>> v2;
    for (int i = 0; i < size; i++)
    {
        cin >> a >> b;
        v2.push_back({a,b});
    }
    printVector2(v2);

    int N;
    cout << "Enter Number of Vectors in Array = ";
    cin >> N;
    vector<int> v3[N];
    for (int i = 0; i < N; i++)
    {
        int n;
        cout << "Enter Number of elements in vector " << i << " = ";
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            v3[i].push_back(x);
        }
    }

    for (int i = 0; i < N; i++)
    {
        printVector(v3[i]);
    }

    vector<vector<int>> v4;
    cout << "Enter Number of Vectors = ";
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int n;
        cout << "Enter Number of Elements in a Vector = ";
        vector<int> temp;
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        v4.push_back(temp);
    }

    v4.push_back(vector<int>());
    for (int i = 0; i < v4.size(); i++)
    {
        printVector(v4[i]);
    }

    return 0;
}