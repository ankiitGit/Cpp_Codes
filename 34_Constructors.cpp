// DEFAULT CONSTRUCTOR 

// class member function jiska naam class k nam pr gya h
// automatically call ho jate h
// inka return type matter nhi krta

#include<iostream>
using namespace std;
class complex {
    int a;
    int b;

    public:
    void print(){
        cout<<"complex number is "<<a<<" + "<<b<<"i"<<endl;
    }
    
    complex(); // no return type mentioned and declared here // ye return type ni likhna h pr argument to abhi b hi le skta hai vo usme koi dikkt ni hai 

};

complex::complex()  // ab jese hi koi class ka object banega uske andr ye phle se aa jaega ki a =10 and b=30 agr us object me hum ye do variables use krne wale h
{
   a=10;
   b=30;
}
int main()
{
    complex c1;
    c1.print();
    return 0;
}