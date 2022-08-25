// case 2-------> mutiple inheritance constructor
// case 2.1-----> no constructor in derived class (only base classes construcors are there )

#include <iostream>
#include <string>
using namespace std;

class base1
{
protected:
    int a;

public:
    base1(int x)
    {
        a = x;
        cout << "the base 1 class' constructor called " << endl;
    }

    void print1()
    {
        cout << "the value of a is " << a << endl;
    }
};

class base2
{
protected:
    int b;

public:
    base2(int y)
    {
        b = y;
        cout << "the base 2 class' constructor called " << endl;
    }

    void print2()
    {
        cout << "the value of b is " << b << endl;
    }
};

class derived : public base2, public base1
{ // order ulta krne se constructor bhi us hisab me call honge
public:
    derived(int y, int z) : base1(y), base2(z)
    { // yahan ke order se koi fark ni pdega ,(arguement krne se to ofcourse pdega hi).... upr wale se pdta hai bas
        // same as :base2(z),base1(y)

        cout << "the derived class' constructor called " << endl;
    }
};

int main()
{

    derived ankit(101, 545);
    ankit.print1();
    ankit.print2();

    return 0;
}


// default

// #include <iostream>
// #include <string>
// using namespace std;

// class base1
// {
// protected:
//     int a;

// public:
//     base1()
//     {
//         a = 100;
//         cout << "the base 1 class' constructor called " << endl;
//     }

//     void print1()
//     {
//         cout << "the value of a is " << a << endl;
//     }
// };

// class base2
// {
// protected:
//     int b;

// public:
//     base2()
//     {
//         b = 200;
//         cout << "the base 2 class' constructor called " << endl;
//     }

//     void print2()
//     {
//         cout << "the value of b is " << b << endl;
//     }
// };

// class derived : public base2, public base1
// { // order ulta krne se constructor bhi us hisab me call honge
// public:
//     derived() 
//     { 
//         // same as derived():base2(),base1()

//         cout << "the derived class' constructor called " << endl;
//     }
// };

// int main()
// {

//     derived ankit(101);
//     ankit.print1();
//     ankit.print2();

//     return 0;
// }