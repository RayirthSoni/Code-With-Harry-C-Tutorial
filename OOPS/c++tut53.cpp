// Abstract Class & Pure Virtual Function
#include <iostream>
#include <cstring>

using namespace std;

// Pure Virtual Function we must override that function in derived class
// an abstract class must have at least one pure virtual function
// an abstract class is one when implementation of function cannot be provided in base class because we dont know implementation
class RS
{
    protected:
    string title;
    float rating;

public:
    RS(float r, string t) : rating(r), title(t) {}
    virtual void getData() = 0; // Do Nothing Function ---> Pure Virtual Function
};

class RSVideo : public RS
{
    float videoLength;

public:
    RSVideo(float r, string t, float vL) : RS(r, t)
    {
        videoLength = vL;
    }
    void getData()
    {
        cout << "The title of video is " << title << endl;
        cout << "Rating : " << rating << " out of 5 stars" << endl;
        cout << "The length of video is " << videoLength << endl;
    }
};

class RSText : public RS
{
    int wordCount;

public:
    RSText(float r, string t, int wC) : RS(r, t)
    {
        wordCount = wC;
    }
    void getData()
    {
        cout << "The title of text is " << title << endl;
        cout << "Rating : " << rating << " out of 5 stars" << endl;
        cout << "The count of word is " << wordCount << endl;
    }
};

int main()
{
    string title;
    float rating, videoLen;
    int wordCount;

    // For RSVideo
    title = "python";
    rating = 4.8;
    videoLen = 22.8;
    RSVideo python(rating, title, videoLen);

    // For RSText
    title = "python tutorial";
    rating = 4.4;
    wordCount = 552;
    RSText pythonTxt(rating, title, wordCount);

    RS *ptr[2];
    ptr[0] = &python;
    ptr[1] = &pythonTxt;

    ptr[0]->getData();
    ptr[1]->getData();

    return 0;
}