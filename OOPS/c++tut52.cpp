// Virtual Functions Example
// Rules for virtual functions
// 1. They cannot be static.
// 2. They are accessed by object pointers.
// 3. Virtual functions can be friend of another class.
// 4. A virtual function in base class might not be used.
// 5. If a virtual function is defined in base class, there is no neccessity of defining it in derived class.
#include <iostream>
#include <cstring>

using namespace std;

class CWH
{
protected:
    float rating;
    string title;

public:
    CWH(float r, string t) : rating(r), title(t) {}
    virtual void getData() {}
};

class CHWVideo : public CWH
{
    float videoLength;

public:
    CHWVideo(float r, string s, float vL) : CWH(r, s)
    {
        videoLength = vL;
    }
    void getData()
    {
        cout << "The title of video is " << title << endl;
        cout << "Rating : " << rating << " out of 5 stars." << endl;
        cout << "The length of video is " << videoLength << endl;
    }
};

class CWHText : public CWH
{
    int wordCount;

public:
    CWHText(float r, string s, int wc) : CWH(r, s)
    {
        wordCount = wc;
    }
    void getData()
    {
        cout << "The title of this document is " << title << endl;
        cout << "Rating : " << rating << " out of 5 stars." << endl;
        cout << "The number of words in this document is " << wordCount << endl;
    }
};

int main()
{
    string title;
    float rating, vlen;
    int wordsCnt;

    // for CHW video
    title = "django tutorial";
    vlen = 22.5;
    rating = 4.8;
    CHWVideo django(rating, title, vlen);

    // for CWH text
    title = "django tutorial";
    wordsCnt = 512;
    rating = 4.6;
    CWHText djangoTxt(rating, title, wordsCnt);

    CWH *ptr[2];
    ptr[0] = &django;
    ptr[1] = &djangoTxt;

    ptr[0]->getData();
    ptr[1]->getData();  // suppose we comment out getData for CWHText then getData of CWH will run

    return 0;
}