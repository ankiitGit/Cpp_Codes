#include<iostream>
#include<string>
using namespace std;

class point  {
   int a;
   int b;
   public:

   point & setdata1()
   {
      a=100;   // this->a=100;   is we learnt earlier 
      return *this;
   }

   point & setdata2(int x)
   {
      this->b=x;
      return *this;
   }
   
   void getdata()
   {
       cout<<"the value of a is "<<a<<endl;
       cout<<"the value of b is "<<b<<endl;
   }
};

int main()
{
    point p;
    p.setdata1().setdata2(200).getdata();

    return 0;
}