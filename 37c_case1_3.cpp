// simple he to or obvious bhi ki base class ke ass constructor nhi hai bs derived class ke pass hai to koi dikkt hi nhi,,,,,vhi jo normal hota hai constructor vesa ho jaega 

// case 1 ----> single inheritance 
// case 1.3 ----> no constructor in base class (only derived class construcor is there )

#include<iostream>
#include<string>
using namespace std;

class base {
    protected:
    int a;

   public:
    void print ()
    {
        cout<<"the value of a is "<<a<<endl;
    }
};

class derived : public base{
    int b;
   public:
    derived(int y){
      b=y;
    }

    void print ()
    {
        cout<<"the value of b is "<<b<<endl;
    }
    
};

int main()
{

    derived ankit(101);
    ankit.print();
   
    return 0;
}