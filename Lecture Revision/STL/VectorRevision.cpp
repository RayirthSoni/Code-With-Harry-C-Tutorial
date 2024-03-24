#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> a{1, 2, 3, 4, 5, 6};
    cout << "Using at(), " << a.at(2) << endl;
    cout << "Using [], " << a[2] << endl;
    cout << "Using front, " << a.front() << endl
         << "Using back, " << a.back() << endl;
    cout << "Using, capacity = " << a.capacity() << endl;
    cout << "Using, size = " << a.size() << endl;


    vector<int> b(5);
    vector<int> c(5,10);
    for(int i=0;i<5;i++){
        cout<<c[i]<<" ";
    }

    vector<int> d;
    d.push_back(10);
    cout<<"Capacity after push_back = "<<d.capacity()<<endl;
    d.push_back(20);
    cout<<"Capacity after push_back = "<<d.capacity()<<endl;
    d.push_back(30);
    cout<<"Capacity after push_back = "<<d.capacity()<<endl;
    d.push_back(40);
    cout<<"Capacity after push_back = "<<d.capacity()<<endl;
    d.push_back(50);
    cout<<"Capacity after push_back = "<<d.capacity()<<endl;
    d.pop_back();
    d.pop_back();
    d.pop_back();
    d.pop_back();
    d.pop_back();
    cout<<d.capacity()<<endl;
    cout<<d.size()<<endl;
    vector<int> f{10,20,30,40,50,60};
    vector<int>:: iterator it=f.begin();
    f.insert(it+3,35);
    for(int i=0;i<f.size();i++){
        cout<<f[i]<<endl;
    }

    return 0;
}