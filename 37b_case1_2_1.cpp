// case 1 ----> single inheritance 
// case 1.2 ----> constructor in derived class ( base class construcor to hai hi )
// Defualt in base and permetrised in derived class 

#include<iostream>
#include<string>
using namespace std;

class base {
    protected:
    int a;

   public:
    base(){
        a=10245;
        cout<<"the base class' constructor called "<<endl;
    }
    
    void print ()
    {
        cout<<"print function of base class has been called\n";
        cout<<"the value of a is "<<a<<endl;
    }

};

class derived : public base{
    public:
    int b;

   public:
    derived(int y){  //isko us syntax m ese bhi likh skte the " derived(int y):base(){} ".....pr defualt wale ke lie vo syantax use krna jaruri nhi hai .......
        b=y;                        
        cout<<"the derived class' constructor called "<<endl;  // ye to bas pata lagane ke lie kab konsa call hua 
    }

    void print()// yaha ambiguity nhi aati kyunki ye to derived ka apna print function hai ,ye print mtlb apne aap smjh jaega ki derived class wala hai,base class wlaa nhi 
    {
        cout<<"\nprint function of derived class has been called\n\n";
        cout<<"the value of a is "<<a<<endl;
        cout<<"the value of b is "<<b<<endl;
    }
};

int main()
{
    derived ankit(200);
    ankit.print();
   
    return 0;
}