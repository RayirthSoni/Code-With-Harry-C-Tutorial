#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    // connecting our file with hout stream
    ofstream hout("sample56.txt");

    // creating a name string and filling it with name enetered by user
    string name;
    cout << "Enter your name : ";
    cin >> name;

    // writing a string to the file
    hout << name + " is my name";
    hout.close();

    ifstream hin("sample56b.txt");
    string content;
    hin>>content;
    cout<<"Content of the file is : "<<content;
    hin.close();

    return 0;
}