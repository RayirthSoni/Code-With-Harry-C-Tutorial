#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    // char s1[10] = "Hello";      // last is \0 which is terminating
    // // s1="Students"                         // wrong
    // strcpy(s1,"Students");
    // char s2[20];
    // // s1=s2                               // wrong
    // strcpy(s2,s1);
    // // s1>s2                              // wrong
    // int i=strcmp(s1,s2);
    // char s3[30];
    // // s3=s1+s2;                        // wrong
    // strcpy(s3,strcat(s1,s2));

    string s1="Hello";
    // can also be written like constructor
    string s2=string("Hello");
    string s3("Hello");

    // can also do like
    char str[]="Hello";
    string s4=str;

    return 0;
}