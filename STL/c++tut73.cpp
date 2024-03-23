#include <iostream>
#include <vector>

using namespace std;

// void printVec(vector<pair<int, int>> v)
void printVect(vector<int> v)
{
    cout << "Size of vector is " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        // cout << v[i].first << " " << v[i].second << " ";
        cout << v[i] << " ";
    }
    cout << endl;
}

class student
{
    int age;
    string name;

public:
    void setData()
    {
        cout << "Age : ";
        cin >> age;
        cout << "Name : ";
        cin >> name;
    }
    void getData()
    {
        cout << "Name = " << name << endl
             << "Age = " << age << endl;
    }
};

int main()
{
    // pair<int, int> p1{20, 40}; // this is also way to initialise
    // // cout << p1.first << endl
    // //  << p1.second << endl;

    // pair<string, int> p2;
    // pair<float, string> p3;
    // pair<string, student> p4;

    // // ways to initialise
    // p1 = {30, 60};
    // p2 = make_pair("Ray", 21);
    // p3 = make_pair(22.5, "ABCD");

    // student s1;
    // s1.setData();
    // p4 = make_pair("EFGH", s1);

    // student s2 = p4.second;

    // cout << "Pair 1" << endl
    //      << p1.first << endl
    //      << p2.second << endl;
    // cout << "Pair 2" << endl
    //      << p2.first << endl
    //      << p2.second << endl;
    // cout << "Pair 3" << endl
    //      << p3.first << endl
    //      << p3.second << endl;
    // cout << "Pair 4" << endl
    //      << p4.first << endl;
    // s1.getData();
    // // s2.getData();

    // pair<int, int> p5;
    // p5 = {100, 200};
    // cout << "Pair 5" << endl
    //      << p5.first << endl
    //      << p5.second << endl;
    // pair<int, int> &p6 = p5;
    // p6.first = 150;
    // cout << "Pair 5 Reference" << endl
    //      << p5.first << endl
    //      << p5.second << endl;

    // // int a[]={1,2,3};
    // // int b[]={4,5,6};

    // pair<int, int> pArr[3];
    // pArr[0] = {1, 4};
    // pArr[1] = {2, 5};
    // pArr[2] = {3, 6};
    // for (int i = 0; i < 3; i++)
    // {
    //     cout << pArr[i].first << " "
    //          << pArr[i].second << " ";
    // }
    // swap(pArr[0], pArr[2]);
    // cout<<endl;
    // for (int i = 0; i < 3; i++)
    // {
    //     cout << pArr[i].first << " "
    //          << pArr[i].second << " ";
    // }

    // nesting in vectors.
    // vector<int> v;
    // int x, size = 5;
    // for (int i = 0; i < size; i++)
    // {
    //     cout << "Enter elements : ";
    //     cin >> x;
    //     v.push_back(x);
    //     printVec(v);
    // }

    // vector<pair<int,int>> o;
    // int n;
    // printVec(o);
    // cout<<"Number of elements = ";
    // cin>>n;
    // for(int i=0;i<n;i++)
    // {
    //     int a,b;
    //     cin>>a>>b;
    //     // o.push_back(make_pair(a,b));
    //     o.push_back({a,b});
    // }
    // printVec(o);

    // array of vectors
    // vector<int> s[10];   yaha pe 10 vectors ka array hai s[0] ek vector s[1] ek vector and so on
    // int N; // number of vectors
    // cout << "Number of vectors : ";
    // cin >> N;
    // vector<int> vobj[N];
    // for (int i = 0; i < N; i++)
    // {
    //     int n; // number of elements in vector
    //     cout << "Number of elements in vector : ";
    //     cin >> n;
    //     for (int j = 0; j < n; j++)
    //     {
    //         int x;
    //         cin >> x;
    //         vobj[i].push_back(x);
    //     }
    // }

    // for (int j = 0; j < N; j++)
    // {
    //     printVect(vobj[j]);
    // }

    // cout<<v[0][0];   0th vector o element analogous to 2d array

    // vector of vectors
    vector<vector<int>> vvobj; // is vector mein vector store karenge
    int N;
    cout << "Enter Number of Vectors : ";
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int n;
        cout << "Enter Number of Vector Elements : ";
        cin >> n;
        // abhi koi vector exist nahi karta isiliye vvobj[i] karke refer nahi kar sakte
        vector<int> temp; // ek temp vector banaeyge jisse push_back karenge as element vvobj mein
        // vvobj.push_back(vector<int> ());    // naya khali vector add ho gaya
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            temp.push_back(x);
            // vvobj[i].push_back(x);   agar khali vector daal diya pehle he tooh aise kar sakte hain
        }
        vvobj.push_back(temp); // vector element pushback kar rahe hain
    }
    vvobj.push_back(vector<int>()); // naya khali vector add ho gaya

    for (int i = 0; i < vvobj.size(); i++)
    {
        printVect(vvobj[i]);
    }

    return 0;
}