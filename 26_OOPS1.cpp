#include <iostream>
using namespace std;

class Employee
{
private:
    int a, b, c;

public:
    int d, e;
    void setData(int a1, int b1, int c1); // Declaration
    void getData()
    { //hum yaha bhi define kr skte h function ko ye btane ki koshish ki
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c << endl;
        cout << "The value of d is " << d << endl;
        cout << "The value of e is " << e << endl;
    }
};

void Employee ::setData(int a1, int b1, int c1)
{           //private data ko access krne ka syntax hai ye
    a = a1; //bahar se run ke lie phle andr declare krna jaruri h function ko
    b = b1;
    c = c1;
}

int main()
{
    Employee harry;
    // harry.a = 134; -->This will throw error as a is private
    harry.d = 34;
    harry.e = 89;
    harry.setData(1, 2, 4);
    harry.getData();

    cout << endl;
    Employee ankit;
    ankit.d = 6132; //ye d ek user defined variable h class ko use krne ka yhi sbse bda reason h //apne hisab se variables banana
    cout<<ankit.d;  // phla wala harry k lie the abhi wala ankit k lie hai
    return 0;
}
