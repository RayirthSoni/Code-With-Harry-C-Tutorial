// File I/O in C++: Reading and Writing Files
/*
The useful classes for working with files in C++ are :
1. fstreambase
2. ifstream     ---> derived from fstreambase
3. ofstream     ---> derived from fstreambase
*/

// In order to work with files in C++, you will have to open it.Primarily,there are 2 ways to open a file:
// 1. Using the constructor
// 2. Using the member function open() of the class
#include<iostream>
#include<fstream>


using namespace std;

int main()
{
    string s="Rayirth Soni";
    string s2;
    // Opening files using constructor and writing it
    // ofstream o("sample55.txt");             // ofstream out("sample55.txt");
    // o<<s;                                   // out<<s;

    // Opening files using constructor and reading it
    ifstream i("sample55b.txt");
    // i>>s2;
    getline(i,s2);
    // getline(i,s2);       agar 2 baar run kiya tooh 2nd line mil jaayegi
    cout<<s2;
    return 0;
}