// copy constructor

#include<iostream>
#include<string>
using namespace std;
class point {
   int a;
   public:
   point(int x)
   {
       a=x;
   }

   point()
   {
       a=0;
   }

   point(point & obj)   //--> copy constructor 
   {
       a=obj.a;
   }

   void get()
   {
       cout<<"the value is "<<a<<endl;
   }

};

int main()
{
    point p,q(556),r;
    p.get();
    q.get();
    r.get();

    point s(q);
    s.get();
    
    // yes we take refrence as function ko thodi pata hai ki q.a kitna hai .......... thats why we take refrence 

    return 0;
}