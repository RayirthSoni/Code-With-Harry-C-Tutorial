#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<int, 5> o1{3, 5, 5, 7, 32};
    cout << "Using at(), we will get " << o1.at(0) << endl;
    cout << "Using [], we will get " << o1[0] << endl;
    cout << "Using front function we will get, " << o1.front() << endl;
    cout << "Using back function we will get, " << o1.back() << endl;
    array<int, 5> o2{1, 2, 3, 4, 5};
    array<int, 5> o3{6, 7, 8, 9, 10};
    cout<<"Array o2 = ";
    for (int i = 0; i < 5; i++)
    {
        cout << o2[i] << " ";
    }
    cout<<endl;
    cout<<"Array o3 = ";
    for (int i = 0; i < 5; i++)
    {
        cout << o3[i] << " ";
    }
    cout<<endl;
    o2.swap(o3);
    cout<<"Array o2 = ";
    for (int i = 0; i < 5; i++)
    {
        cout << o2[i] << " ";
    }
    cout<<endl;
    cout<<"Array o3 = ";
    for (int i = 0; i < 5; i++)
    {
        cout << o3[i] << " ";
    }
    cout<<endl;
    array<int,6> o4;
    cout<<"Array o4 = ";
    o4.fill(10);
    for(int i=0;i<6;i++)
    {
        cout<<o4[i]<<" ";
    }
    cout<<endl;
    cout<<o1.size()<<endl;
    cout<<o2.size()<<endl;
    cout<<o3.size()<<endl;
    cout<<o4.size()<<endl;
    return 0;
}