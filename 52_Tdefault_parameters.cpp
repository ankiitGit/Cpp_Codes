#include<iostream>
#include<string>
using namespace std;
template<class T1=int, class T2=float>
class Harry {
   public:
   T1 a;
   T2 b;
   Harry(T1 x, T2 y)
   {
       a=x;
       b=y;
   }
   ostream& display (){  // is bar ye islie kyunki 23 line dimag me thi ki esa kr lenge 
       cout<<"The value of a is "<<a<<endl;
       cout<<"The value of b is "<<b<<endl;
       return cout ;
   }
};
int main()
{
    Harry <> h(3,4.2); // <> humne isko khali chod diya kyunki by default vo ek int flaot defined hai 
    h.display()<<endl;  // nina ostream& return kiye hum function ke sath << laga kr display nhi kr skte the 

    Harry <char,int> h2('l',5); // humne data bad me change bhi kr diya to koi dikkt nhi hai 
    h2.display();

    return 0;
}