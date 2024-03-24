#include <iostream>
#include <cstring>

using namespace std;

class cwh
{
protected:
    float rating;
    string title;

public:
    cwh(float r, string t) : rating(r), title(t) {}
    virtual void getData() {}
};

class cwhtext : public cwh
{
protected:
    int wordCount;

public:
    cwhtext(float r, string t, int wc) : cwh(r, t) { wordCount = wc; }
    void getData()
    {
        cout << "Title of Text Document is " << title << endl
             << "Number of Words in Document is " << wordCount << endl
             << "Rating of Document is " << rating << endl;
    }
};

class cwhvideo : public cwh
{
protected:
    float videoLength;

public:
    cwhvideo(float r, string t, float vL) : cwh(r, t) { videoLength = vL; }
    void getData()
    {
        cout << "Title of Video is " << title << endl
             << "Length of video is " << videoLength << endl
             << "Rating of Video is " << rating << endl;
    }
};

class rs
{
protected:
    float rating;
    string title;

public:
    rs(float r, string t) : rating(r),title(t){}
    virtual void getData() = 0;
};

class rstext : public rs
{
protected:
    int wordCount;

public:
    rstext(float r,string t,int wC) : rs(r,t)
    {
        wordCount=wC;
    }
    void getData()
    {
        cout << "Title of Text Document is " << title << endl
             << "Number of Words in Text Document is  " << wordCount << endl
             << "Rating of Text Document is " << rating << endl;
    }
};

class rsvideo : public rs
{
protected:
    float videoLength;

public:
    rsvideo(float r,string t,float vL) : rs(r,t)
    {
        videoLength=vL;
    }
    void getData()
    {
        cout << "Title of Video Length is " << title << endl
             << "Length of Video is " << videoLength << endl
             << "Rating of Video is " << rating << endl;
    }
};

int main()
{
    float videoLength, rating;
    string title;
    int wordCount;

    // for cwhtext
    rating = 4.8;
    title = "Python Tutorial";
    wordCount = 532;
    cwhtext python(rating, title, wordCount);

    // for cwhvideo
    rating = 5.0;
    title = "C++";
    videoLength = 21.19;
    cwhvideo cpp(rating, title, videoLength);

    cwh *ptr[2];
    ptr[0] = &python;
    ptr[1] = &cpp;
    ptr[0]->getData();
    cout<<endl;
    ptr[1]->getData();
    cout<<endl;

    // for rstext
    rating = 5.0;
    title = "Java";
    wordCount = 677;
    rstext java(rating, title, wordCount);

    // for rsvideo
    rating = 4.9;
    title = "Machine Learning";
    videoLength = 20.5;
    rsvideo mL(rating, title, videoLength);

    rs *p[2];
    p[0] = &java;
    p[1] = &mL;
    p[0]->getData();
    cout<<endl;
    p[1]->getData();
    cout<<endl;

    return 0;
}