// case 2-------> mutiple inheritance constructor
// case 2.1-----> constructor in derived class also ( base classes construcors are already there )



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

};

class base2
{
protected:
    int b;

public:
    base2(int y)
    {
        b =y;
        cout << "the base 2 class' constructor called " << endl;
    }

};

class derived : public base2, public base1
{ 
protected:
int c;
public:
    derived(int d,int e,int f) :base1(d),base2(e)
    { 
       c=f;

        cout << "the derived class' constructor called " << endl;
       
    }

    void print (){
         cout << "the value of a is " << a << endl;
        cout << "the value of b is " << b << endl;
        cout << "the value of c is " << c << endl;
    }
};

int main()
{

    derived ankit(101,200,2321); // ek bar sirf ye line run krke dekh 
    // ankit.print();
    

    return 0;
}