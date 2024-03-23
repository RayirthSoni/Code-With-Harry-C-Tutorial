// MULTILEVEL INHERITANCE
// If we are inheriting B from A & C from B : [A--->B--->C]
// 1. A is base class for B and B is base class for C.
// 2. A---> B ---> C is Inheriting Path.
#include <iostream>
using namespace std;

class student
{
protected:
    int rollNumber;

public:
    void setRollNumber();
    void getRollNumber();
};

void student::setRollNumber()
{
    cout << "Enter Roll Number : ";
    cin >> rollNumber;
}

void student::getRollNumber()
{
    cout << "Roll Number = " << rollNumber << endl;
}

class exam : public student
{
protected:
    float mathMarks;
    float physicsMarks;

public:
    void setMarks();
    void getMarks();
};

void exam::setMarks()
{
    cout << "Enter Maths Marks : ";
    cin >> mathMarks;
    cout << "Enter Physics Marks : ";
    cin >> physicsMarks;
}

void exam::getMarks()
{
    cout << "Marks in Maths is " << mathMarks << endl;
    cout << "Marks in Physics is " << physicsMarks << endl;
}

class result : public exam
{
protected:
    float percentage;

public:
    void displayResult();
};

void result::displayResult()
{
    getRollNumber();
    getMarks();
    cout << "Percentage Obtained is " << (mathMarks + physicsMarks) / 2 << "%" << endl;
}

int main()
{
    result rayirth;
    rayirth.setRollNumber();
    rayirth.setMarks();
    rayirth.displayResult();
    return 0;
}