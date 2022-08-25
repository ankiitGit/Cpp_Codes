// parametrised condtructor

#include<iostream>
using namespace std;
class complex {
    int a;
    int b;

    public:
    void print(){
        cout<<"complex number is "<<a<<" + "<<b<<"i"<<endl;
    }
    
    complex(int x,int y); // PARAMETRISED CONSTRUCTOR
};

complex::complex(int x,int y)  
{
   a=x;
   b=y;
}
int main()
{
    complex c1(5,9),c2(100,200);
    c1.print();
    c2.print();
    return 0;
}