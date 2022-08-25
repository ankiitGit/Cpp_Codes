#include<iostream>
#include<string>
using namespace std;
class base {

   public:

   int a;

   void display(){
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
    base *ptr;
    base b;
    ptr=&b;

    derived d1,d2;

    ptr=&d1; // point to kr lia base wale ne derived ko ...... VALID 

    ptr->a=125; // valid becuse a is also a member of derived one 

    // ptr->b; an error..............NOT VALID 

    ptr->display(); // base class display will be called 
     
    cout<<endl;

    derived *ptr2;
    ptr2 = &d2;

    ptr2->a=451;   // can excess the members which are inheritat
    ptr2->b=126;
    ptr2->display();   // this display is of derived class kyunki derived ka hi pointer hai 


    cout<<"\n\nye to ese hi smjhne ke lie ki pointer ese bhi bnta h (ofcourse we know ) ,isme object latently banta hai \n";
    derived *ptr3=new derived;
    ptr3->a=45;
    ptr3->b=454;
    ptr3->display();



    return 0;
}