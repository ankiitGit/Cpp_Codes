#include <iostream>
#include <string>
using namespace std;

class height
{
    string name[10];
    float H[10];

public:
    void getData();
    void setData();
};

void height::getData()
{
    for (int i = 0; i < 5; i++)
    {
        cout << "enter the name of student " << i + 1 << endl;
        cin >> name[i];
        cout << "enter the hieght of " << name[i] << endl;
        cin >> H[i];
    }
}

void height::setData()
{
    for (int i = 0; i < 5; i++)
    {
        cout << " the name of student " << i + 1 << " is " << name[i] << endl;
        cout << " the hieght of " << name[i] << " is " << H[i] << endl;
        cout << endl;
    }
}

int main()
{
    height a;
    a.getData();
    a.setData();

    return 0;
}