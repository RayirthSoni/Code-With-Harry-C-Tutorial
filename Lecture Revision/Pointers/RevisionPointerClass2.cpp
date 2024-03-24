#include <iostream>

using namespace std;

class RS
{
public:
    string title;
    float rating;

    RS(string t, float r) : title(t), rating(r) {}
    // virtual void getData() {}
    virtual void getData() = 0;
};

class RSText : public RS
{
    int wordCount;

public:
    RSText(string t, float r, int wc) : RS(t, r)
    {
        wordCount = wc;
    }
    void getData()
    {
        cout << "Word Count is " << wordCount << endl
             << "Title is " << title << endl
             << "Rating is " << rating << endl;
    }
};

class RSVideo : public RS
{
    float videoLength;

public:
    RSVideo(string t, float vl, float r) : RS(t, r) {
        videoLength=vl;
    }
    void getData()
    {
        cout << "Video Length = " << videoLength << endl
             << "Title = " << title << endl
             << "Rating = " << rating << endl;
    }
};

class base
{
public:
    int baseValue;
    virtual void getData()
    {
        cout << "baseValue = " << baseValue << endl;
    }
};

class derived : public base
{
public:
    int derivedValue;
    void getData()
    {
        cout << "baseValue = " << baseValue << endl
             << "derivedValue = " << derivedValue << endl;
    }
};

int main()
{
    base *baseObjectPointer, bo1;
    derived do1, *derivedPointer;

    baseObjectPointer = &do1;
    derivedPointer = &do1;

    baseObjectPointer->baseValue = 120;
    baseObjectPointer->getData();

    derivedPointer->derivedValue = 200;
    derivedPointer->getData();

    derivedPointer->baseValue = 222;
    derivedPointer->getData();

    string title;
    int wCount;
    float vLen, rting;

    cout<<"Title = ";
    cin >> title;
    cout<<"Word Count = ";
    cin >> wCount;
    cout<<"Video Length = ";
    cin >> vLen;
    cout<<"Rating = ";
    cin >> rting;
    RSText django(title, rting, wCount);
    // django.getData();
    RSVideo djangoVideo(title, vLen, rting);
    // djangoVideo.getData();
    RS *ptr[2];
    ptr[0]=&django;
    ptr[1]=&djangoVideo;
    ptr[0]->getData();
    ptr[1]->getData();
    return 0;
}