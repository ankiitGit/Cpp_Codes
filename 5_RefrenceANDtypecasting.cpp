#include <iostream>
using namespace std;

int main()
{

    // typecasting mtlb ek variable ya data type ko dusre me convert ya shift karna

    int a = 5;
    float b = 45.5;
    cout << "the value of a+b is " << a + b << endl;
    cout << "the value of a+int(b) is " << a + int(b) << endl;
    cout << "the value of int(a)+b is " << int(a) + b << endl;
    cout << "the value of int(a+b) is " << int(a + b) << endl;

    cout << endl;
    // refrence mtlb alag alag chij ko ek hi naam dena

    int x = 6;
    int &y = x;        //this is what we called refre. & laga ke hume bta diya
    cout << y << endl; //ye y =6 print kr dega
    cout << y + 2;     // to ye sidha 6+2 kr dega
    // by default isme isme esa hota hai ki int/int ki vlaue ko int hi consier kie jata hai

    cout<<"\neven if we change in y it will impact on x as y is storing the refrence which is known as call by reference\n";
    y=y+10;
    cout<<x;
   
    // to get decimal value and to have a safe side we should use typecast

    int c = 3;
    cout << "\n_______________________________\n";

    cout << "the value of a/c i.e. 5/3 by default is;" << a / c;

    cout << "                           \n"
         << "for safer isde we use typecast ;"
         << "the value of 5/3 after typecasting into float value is ;" << (float)a/c;

    return 0;
}