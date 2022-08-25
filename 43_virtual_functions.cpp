#include<iostream>
#include<string>
using namespace std;
class base {

   public:

   int a;

   virtual void display(){
       cout<<"the value of a is "<<a<<endl;
   }

};

class derived : public base {

   public:

   int b;

   void display(){
       cout<<"the value of a is "<<a<<endl;
       cout<<"the value of b is "<<b<<endl;
   }

};

int main()
{
    base b;
    base *ptr;

    derived d;
    ptr=&d;

    ptr->a=125;  
    ptr->display(); // agar virtual nhi lagaya to base class display will be called ....agar virtual laga diya to derived class display will be called 


 return 0;
}