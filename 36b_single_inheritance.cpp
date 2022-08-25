#include<iostream>
#include<string>
using namespace std;

class base {
 int data1 ;  // ye private hai ,non-inheritable

   public:
   int data2;
   void setdata(); 
   int getdata1();
   int getdata2();

};

void base ::setdata(){
    data1=10;
    data2=20;  // ye to hum directly bhi kr skte the 
}
int base ::getdata1(){
    return data1;
}
int base ::getdata2(){
    return data2;
}


class derived : public base {
   int data3;

   public:
    void process();
    void display();
};

void derived::process(){
    // data3 = data1*data2;  data1 ko directly access nhi kr skte
    data3 = getdata1()*data2;  //data2 to inhert hua h to kr skte hai
}
void derived:: display(){
    cout<<"the value of data1 is "<<getdata1()<<endl; // data1 ko directly access nhi kr pate 
    cout<<"the value of data2 is "<<data2<<endl;
    cout<<"the value of data3 is "<<data3<<endl;
}
int main()
{
    derived d;
    d.setdata();  // jab tak ye call nhi krege data1 ka acess mil hi nhi paega 
    d.process();  // jab tk ye nhi krenge data 3 kese kuch milega 
    d.display();

    return 0;
}