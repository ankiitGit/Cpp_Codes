// case 1 ----> single inheritance 
// case 1.1.1 ----> no constructor in derived class (only base class construcor is there )
// DEFAULT CONSTRUCTOR this time, takes no arguement 


            
#include<iostream>
#include<string>
using namespace std;

class base {
    int a;

   public:
    base(){
        a=10575;
        cout<<"the base class' constructor called "<<endl;
    }
    
    void print ()
    {
        cout<<"the value of a is "<<a<<endl;
    }
};

class derived : public base{
   public:
    derived():base(){  // derved() likhte to bhi chlta 
        cout<<"the derived class' constructor called "<<endl;
        // hum derived constructor bana hi nhi rhe actually hum bta rhe h ki ye y base wale ka hai.........agr hume derived ka constructor likhna hita to hum or variable likh dete e...agle case se smjh aa jaega 
    }
};

int main()
{
    
    derived ankit;
    ankit.print();
   
    return 0;
}