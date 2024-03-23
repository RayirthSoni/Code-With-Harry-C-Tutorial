#include <iostream>
#include <cstring>
#include <string.h>

/*
assign
append
insert ---> insert(index,"whatever you want to insert")
replace ---> (index,length,what you want to replace with)
empty ---> checks whether string empty or not.returns bool value
str.empty()==1 ? cout<<"Empty" : cout<<"Not empty";
erase ---> can also enter index erase(1,3) will erase from index 1 to 3 including both
find
rfind
compare
c_str
size
length ---> tells length of string
substring ---> s1.substr(index,length)
stoi ---> string to integer
stoi("50")
50+2=52;
integer to string ---> to_string(variable name);
sort() ---> sort(str.begin(),str.end())     this will do ascending
to get descending sort like this then loop from last to first
getline --> entering line getline(cin,name of variable);
*/

using namespace std;

int main()
{
    string s1 = "Hello";
    string s2 = "World";
    string s3;
    // s1+=s2;
    s3 = s1 + s2;
    cout << s1 << endl
         << s2 << endl
         << s3 << endl;

    // cout<<"Enter Your Name : ";
    // string s4;
    // cin>>s4;

    string s5, s6, s7;
    // s5 = s1 + 123;           this will give error
    s5 = s1 + " Rayirth";
    cout << s5 << endl;
    s5 = s1 + 'R';
    cout << s5 << endl;

    s6 = "Rayirth";

    s7.assign("Soni");
    cout << s7 << endl;

    s6.append(s7); // can also be done as s6+s7
    cout << s6 << endl;

    string s8, s9, s10, s11;

    s8 = "Hello";
    s8.insert(2, "123");
    cout << s8 << endl;

    // replace(index,length,what you want to replace with)
    s8.replace(2, 3, "A");
    cout << s8 << endl;

    s8.erase();
    cout << s8 << endl;

    s9 = "Hello online online students";

    cout << s9.find("online") << endl; // can also be done as
    // if we find saurabh above we will get garbage value also if 2 times online present index of first one we will get

    int i = s9.find("saurabh");
    cout << i << endl;

    cout << s9.rfind("online") << endl; // peecha se dhoonda lekin index starting se he 0

    s10 = "amar";
    s11 = "amit";
    cout << s10.compare(s11) << endl;
    // 0 same
    // -1 amar amit     matlab amar pehle fir amit in dictionary or in other words amar is smaller than amit
    // +1 amit amar
    string s12, s13;
    char str[20];
    s12 = "Hello";
    strcpy(str, s12.c_str());
    cout << str << endl;
    cout << s12.size() << endl;

    string aaaa = "23";
    string bbbb = "22";
    int aa1 = stoi(aaaa);
    int bb1 = stoi(bbbb);
    cout << "a1+b1 = "<<bb1 + ;

    getline(cin, s13);
    cout << s13 << endl;

    return 0;
}