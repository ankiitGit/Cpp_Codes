#include<iostream>
#include<string>
#include<typeinfo>
using namespace std;
template<class T1, class T2>  //syntax for multiple parameters

class multi {
   
   public:
   T1 a;
   T2 b;
   multi(T1 x){
       a=x;
       b='k';
   }
   multi(T1 x,T2 y){
       this->a=x; //ye to ese hi ishtyle
       this->b=y;
   }
   void display(){
       cout<<"this time it is "<< typeid(T1).name()<<" and "<<typeid(T2).name()<<" ---> "<<a<<" and "<<b<<endl;
   }
};
//typeid(T1).name() a function to know data type of variable using <typeinfo> library

int main()
{ 
    // syntax- classname <type1,type2,......,type n,....> obj;

    multi <int,char> m1(10);            m1.display();
    multi <char,char> m2('q');          m2.display();
    multi <int,float> m3(8,5.2);        m3.display();



    return 0;
}