#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v1;
    vector<int> v2(4);
    vector<string> v3(3, "Hello");
    int n, x;
    cout << "Number of Elements : ";
    cin >> n;
    cout << "Enter Elements of Vector : ";
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        cout << "Capacity of Vector is " << v1.capacity() << endl;
        v1.push_back(x);
    }
    cout << "Vector = ";
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1.at(i) << " ";
    }
    cout << endl;
    cout << "Size of Vector is " << v1.size() << endl;
    cout << "Capacity of Vector is " << v1.capacity() << endl;
    cout << "Using front(),we get " << v1.front() << endl;
    cout << "Using back(),we get " << v1.back() << endl;

    v1.pop_back();
    cout << "Vector after 1 pop_back is : ";
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1.at(i) << " ";
    }
    cout<<endl;
    
    vector<int>:: iterator it=v1.begin();
    v1.insert(it+3,22);
    cout << "Vector after insert is : ";
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    return 0;
}