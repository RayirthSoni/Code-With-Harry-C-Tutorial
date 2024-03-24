#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<int, string> customer;
    customer[100] = "Ritik";
    customer[143] = "Raj";
    customer[200] = "Rohan";
    customer[160] = "Nitin";
    cout << customer.at(100) << endl;
    cout << customer[100] << endl;
    map<int, string>::iterator it = customer.begin();
    while (it != customer.end())
    {
        cout << it->second << endl;
        it++;
    }

    map<int,string> customer2{{21,"Rayirth"},{11,"Raj"},{19,"Nikhil"},{26,"Mohan"},{44,"Mohit"}};
    map<int, string>::iterator it2 = customer2.begin();
    customer2.insert(pair<int,string>(300,"Saurabh"));
    while (it2 != customer2.end())
    {
        cout << it2->second << endl;
        it2++;
    }
    customer.clear();
    cout<<customer.empty()<<endl;

    return 0;
}