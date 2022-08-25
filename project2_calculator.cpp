/*
Create 2 classes:
    1. SimpleCalculator - Takes input of 2 numbers using a utility function and performs +, -, *, / and displays the results using another function.
    2. ScientificCalculator - Takes input of 2 numbers using a utility function and performs any four scientific operations of your choice and displays the results using another function.

    Create another class HybridCalculator and inherit it using these 2 classes:
    Q1. What type of Inheritance are you using?
    Q2. Which mode of Inheritance are you using?
    Q3. Create an object of HybridCalculator and display results of the simple and scientific calculator.
    Q4. How is code reusability implemented?
*/    

#include<iostream>
#include<string>
#include<math.h>
using namespace std;
class simple {
   float a,b;

   public:
   void getNumbers_simple(){
       cout<<"enter the value of a and b respectively : "; cin>>a>>b;
   }

   void performSimple(){
       cout<<"the value of a + b is ----->  "<<a+b<<endl;
       cout<<"the value of a - b is ----->  "<<a-b<<endl;
       cout<<"the value of a * b is ----->  "<<a*b<<endl;
       cout<<"the value of a / b is ----->  "<<a/b<<endl;
   }
   
};

class scientific {
   float a;

   public:
   void getNumbers_scientific(){
       cout<<"enter the value of a : "; cin>>a;
   }

   void performScientific(){
       cout<<"the value of sin(a)  is ----->  "<<sinf(a)<<endl;
       cout<<"the value of cos(a)  is ----->  "<<cosf(a)<<endl;
       cout<<"the value of exp(a)  is ----->  "<<long(exp(a))<<endl;
       cout<<"the value of tan(a)  is ----->  "<<tanf(a)<<endl;
   }
   
};

class Hybrid : public simple, public scientific {
  // we just inheritaded ,no new methods 
};

int main()
{
    Hybrid calc;
    calc.getNumbers_simple();
    calc.performSimple();
    cout<<endl;
    calc.getNumbers_scientific();
    calc.performScientific();
    return 0;
}