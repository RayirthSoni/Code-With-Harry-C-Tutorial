#include <iostream>
#include <vector>

using namespace std;

// capacity() number of elements vector can hold before more memory is allocated
// pop_back last element remove hota hai.
// size() number of elements in vector
// clear() removes all element present in vector
// at()
// front
// back

int main()
{
    vector<int> v1{10, 20, 30};
    vector<char> v2(4);            // size is 4 here of vector
    vector<int> v3(5, 10);         // yaha pe vector hai 5 size ka and har block pe value 10
    vector<string> v4(3, "Hello"); // yaha pe string vector hai jiska size 3 hai and har block pe hello stored hai
    // vector pe comparison operators chalte hain

    // []
    for (int i = 0; i < 3; i++)
    {
        cout << v1[i] << endl;
    }

    vector<int> vo;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cout<<"Enter Elemnet : ";
        cin>>x;
        cout<<"Size of Vector : "<<vo.size()<<endl;
        for(int i=0;i<vo.size();i++)
        {
            cout<<vo[i]<<endl;
        }
        vo.push_back(x);
    }

    // capacity()
    vector<int> v5;
    // cout<<"Capacity is "<<v5.capacity()<<endl;       0
    // v5.push_back(10);
    // cout<<"Capacity is "<<v5.capacity()<<endl;       1
    // v5.push_back(20);
    // cout<<"Capacity is "<<v5.capacity()<<endl;       2
    // v5.push_back(30);
    // cout<<"Capacity is "<<v5.capacity()<<endl;       4
    // v5.push_back(40);
    // cout<<"Capacity is "<<v5.capacity()<<endl;       4

    // v5           capacity=0
    // ab bharenge tooh
    // 1
    // fir capacity double hue
    // 2
    // firse bhara full ho gaya vector ab capacity double
    // 4
    // ab jab tak bharta nahi 4 rahi capacity uske baad double hoga

    for (int i = 0; i <= 9; i++)
    {
        v5.push_back(10 * (i + 1));
    }
    cout << v5.capacity() << endl; // capacity yaha 16
    // pehle 0 thi fir 1,2,4,4,8,8,8,8,16,16 jab tak poori nahi bharti

    v5.pop_back();
    v5.pop_back();
    v5.pop_back();
    v5.pop_back();
    v5.pop_back();
    cout << "Capacity after pop : " << v5.capacity() << endl;
    cout << "Size of vector is : " << v5.size() << endl;
    // we will see capacity still 16 so it means capacity sirf badhti hai reduce nahi hoti

    for (int i = 0; i < v5.size(); i++)
    {
        cout << v5[i] << endl;
    }

    v5.clear();
    cout << "Capacity : " << v5.capacity() << endl // this will be 16 still
         << "Size : " << v5.size() << endl;        // this will be 0
    cout << "Using at(), " << v1.at(1) << endl
         << "Using front(), " << v1.front() << "\nUsing back, " << v1.back() << endl;

    // using iterator
    vector<int> v6{10, 20, 30, 40, 50, 60, 70, 80};
    for (int i = 0; i < v6.size(); i++)
    {
        cout << v6[i] << endl;
    }
    vector<int>::iterator it = v6.begin();
    v6.insert(it + 3, 35);
    cout<<endl<<endl;
    for (int i = 0; i < v6.size(); i++)
    {
        cout << v6[i] << endl;
    }

    return 0;
}