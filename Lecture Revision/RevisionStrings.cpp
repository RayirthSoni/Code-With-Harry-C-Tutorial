#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

/*
Functions Used
assign() --> s1.assign("Whatever you want to");
append() --> s1.append(s2);
size() --> s1.size();
length() --> will give you length of string like size does
stoi() --> used to convert to integer.
        string a="100",b="200";
        int num1=stoi(a);
        int num2=stoi(b);
        cout<<num1+num2;
to_string() --> converts integer to string.to_string(variable name)
compare() --> this is used to compare to strings.
amar
amit
0 means same
1 means bigger
-1 means smaller amar before in dictionary than amit
find() --> find("whatever you want to find")
rfind() -->rfind("whatever you want to find")
insert() -->insert(index,"whatever you want to insert")
replace() -->(index,length,what you want to replace with)
clear() --> will clear the string.will erase entire string
erase() --> can also enter the index (1,4) will erase both index
empty() --> returns bool value
    s5.empty() == 1 ? cout<<"Empty" : cout<<"Not empty";

getline() --> normally we cant input line in string so use getline
    getline(cin,variable name);
sort() -->
substr() --> will give a substring
    substring(index,length);

*/

int main()
{
    string s1, s2, s3;
    s1 = "Hello,";
    s2 = "World !";
    s3 = s1 + s2;
    cout << "s1 = " << s1 << endl
         << "s2 = " << s2 << endl
         << "s3 = " << s3 << endl;
    cout << "Using assign,for s1 = " << s1.assign("Hola,") << endl;
    cout << "Using append,for s1 & s2 = " << s1.append(s2) << endl;
    cout << "Using Size, " << s3.size() << endl;     // s3=Hello,World !
    cout << "Using Length, " << s3.length() << endl; // s3=Hello,World !
    string a = "100", b = "200";
    int num1 = stoi(a);
    int num2 = stoi(a);
    cout << "Before Converting to integer adding them, " << a + b << endl;
    cout << "After Converting to integer adding them, " << num1 + num2 << endl;
    int num3 = 400;
    string s4 = to_string(num3);
    cout << "After converting to string from integer, = " << s4 << endl;
    cout << "After converting to string from integer, = " << s4 + a << endl;
    cout << "Checking if string is empty or not using empty function\n";
    string s5;
    s5.empty() == 1 ? cout << "Empty\n" : cout << "Not Empty\n";
    cout << "If you want to input a line : ";
    getline(cin, s5);
    cout << s5 << endl;
    cout << s5.substr(0, 5) << endl;
    cout << s5.find("hello") << endl;
    cout << s5.rfind("hello") << endl;
    string s6 = "Amar";
    string s7 = "Amit";
    cout << "Using compare function, = " << s6.compare(s7) << endl;
    string s8 = "Hello World";
    s8.erase(1, 4);
    cout << s8 << endl;
    string s9 = "Testing";
    s9.insert(7, "Inserted String");
    cout << s9 << endl;
    s9.replace(7, 16, "Replaced String");
    cout << s9 << endl;
    string s12, s13;
    char str[20];
    s12 = "Hello";
    strcpy(str, s12.c_str());
    cout << str << endl;
    cout << s12.size() << endl;
    string s14 = "saknfjfqkwhwoqiwerj";
    sort(s14.begin(), s14.end());
    cout << s14 << endl;
    return 0;
}