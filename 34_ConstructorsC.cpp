// distance between two points

#include <iostream>
// #include <string>
#include <math.h>
using namespace std;
class point
{
    int x, y;

public:
    point(int a1, int a2);
    //declared the function
    //which actually a constructor,a parametrised constructor
    // no return type in constructors

    //friend function actually allow krta hai ki hum class ke private memebers ko class ke bahar kisi function me invoke kr skte hai without help if an object

    friend float distance(point c, point d);
    //1.passing objects
    //2. also we want to call distance function without a driver function or without help of a object
};

point::point(int a1, int a2)
{

    x = a1;
    y = a2;
}

float distance(point c, point d)
{

    return sqrt(pow((c.x - d.x), 2) + pow((c.y - d.y), 2));
}

int main()
{
    int x1, y1, x2, y2;
    cout << "enter the x and y codinate of first point respectively\n";
    cin >> x1;
    cin >> y1;
    cout << "enter the x and y codinate of second point respectively\n";
    cin >> x2 >> y2;

    point A(x1, y1), B(x2, y2);
    cout << "the distance between point A and B is ----->  " << distance(A, B);

    return 0;
}