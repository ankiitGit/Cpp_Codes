// multiple inheritance me agr do base class me same nam ke function aa jae to derived me konse wale ko call krna hai 
//ye ek type ki ambiguity hai jisko resolve krne ke lie hume  base1::fucntion_ame ese define krkre resolve krnapdta hai 

#include<iostream>
#include<string>
using namespace std;
class base1 {

   public:
   void greet(){
       cout<<"hello"<<endl;
   }

};

class base2 {

   public:
   void greet(){
       cout<<"namaste"<<endl;
   }

};

class derived : public base1,public base2 {
    public:
    void greet()
    {
        base2::greet();
    }

};
int main()
{
    derived d;
    d.greet();  //this is an error if dont do this base1::greet()

    return 0;
}