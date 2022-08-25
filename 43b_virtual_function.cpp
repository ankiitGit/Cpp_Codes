#include <iostream>
#include <string>
using namespace std;

class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display() 
    {
        // jan kakre empty rkh re hai,,,,kyunki ye call ni honna ahi.........ek case me call hoga i manle derived class me koi display naam ka fucntion hi ni aaya ...tb ye call ho jaega uski jagah 
    }
};

class CWHVideo : public CWH
{
    float videoLength;

public:
    CWHVideo(string s, float r, float vl) : CWH(s, r)
    {
        videoLength = vl;
    }
    void display()
    {
        cout << "This is an amazing video with title " << title << endl;
        cout << "Ratings: " << rating << " out of 5 stars" << endl;
        cout << "Length of this video is: " << videoLength << " minutes" << endl;
    }
};

class CWHText : public CWH
{
    int words;

public:
    CWHText(string s, float r, int wc) : CWH(s, r) // ye to vo special syntax
    { 
        words = wc;
    }
    void display()
    {
        cout << "This is an amazing text tutorial with title " << title << endl;
        cout << "Ratings of this text tutorial: " << rating << " out of 5 stars" << endl;
        cout << "No of words in this text tutorial is: " << words << " words" << endl;
    }
};

int main()
{
    string title;
    float rating, vlen;
    int words;

    // for Code With Harry Video
    title = "Django tutorial";
    vlen = 4.56;
    rating = 4.89;
    CWHVideo djVideo(title, rating, vlen);

    // for Code With Harry Text
    title = "Django tutorial Text";
    words = 433;
    rating = 4.19;
    CWHText djText(title, rating, words);

    CWH *tuts[2]; // 2pointer banae CWH data type ke
    tuts[0] = &djVideo;
    tuts[1] = &djText;

    tuts[0]->display(); /* agr virtual na likhte to base class wla display krta*/ cout<<endl;
    tuts[1]->display();


    /* 
    Rules for virtual functions
    1.They cannot be static
    2.They are accessed by object pointers
    3.Virtual functions can be a friend of another class
    4.A virtual function in the base class might not be used.
    5.If a virtual function is defined in a base class, there is no necessity of redefining it in the derived class
    */

    return 0;
}
