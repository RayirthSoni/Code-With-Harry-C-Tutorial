#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main()
{
    ofstream out;
    out.open("sample58.txt");
    out << "This is me\n";
    out << "This is also me\n";
    out << "This is me again";
    out.close();

    ifstream in;
    string s, s2;
    in.open("sample58b.txt");
    // in>>s>>s2;
    // cout<<s<<s2;

    while (in.eof() == 0)
    {
        getline(in, s);
        cout << s << endl;
    }
    in.close();

    return 0;
}