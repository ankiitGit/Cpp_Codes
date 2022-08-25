#include<iostream>
#include<string>
using namespace std;
class base1 {
   protected :
   int a;

   public:
   void set_a(int x){
       a=x;
   }

};
class base2 {
   private:
   int c;

   protected:
   int b;

   public:
   void set_b(int x){
       b=x;
   }

   int set_c(int x){
       c=x;
       return c;
   }
};

class derived : public base1 , public base2{
   public:
   void show(){
       cout<<"the value of a is --> "<<a<<endl;
       cout<<"the value of b is --> "<<b<<endl;
       cout<<"the value of c is --> "<<set_c(25)<<endl;
   }

};
int main()
{
    derived d;
    d.set_a(10);
    d.set_b(50);
    d.show();

    return 0;
}