#include <iostream>
#include <map>

using namespace std;

/*
at()
[]
size()
empty() to check if map is empty or not.if empty we get 1 else 0
insert()
clear()
*/

int main()
{
    // map<key,value>
    // key cannot be altered it can be inserted or deleted.
    // keys are in sorted order.
    // if key is string then dictionary order
    map<int, string> customer;
    customer[100] = "Rayirth";
    customer[123] = "Amar";
    customer[145] = "Amit";
    customer[171] = "Nitin";
    customer[200] = "Soham";

    // can also do like this
    map<int, string> customer2{{100, "Gajendra"}, {123, "Ritik"}, {145, "Naman"}, {171, "Himanshu"}, {200, "Vijay"}};

    cout << customer[100] << endl;
    cout << customer[123] << endl;
    cout << customer[145] << endl;
    cout << customer.at(145) << endl;

    cout << endl
         << endl;

    // customer.insert(205,"Saurabh");  this will give error we insert like this
    customer.insert(pair<int,string>(205,"Saurabh"));

    map<int, string>::iterator it = customer.begin();
    // customer.clear();
    while (it != customer.end())
    {
        // agar it->first then key print hoga 
        cout << it->second << endl;
        it++;
    }
    cout<<"\nSize of map is,using size() : "<<customer.size()<<endl;
    cout<<customer.empty()<<endl;
    return 0;
}