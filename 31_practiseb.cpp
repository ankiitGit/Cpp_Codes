#include<iostream>
#include<string>
using namespace std;

class complex {
  int a;
  int b;

   public:
    void setdata(int x,int y){
        a=x;
        b=y;
    }
    void print(){
        cout<<"copmlex number is : "<<a<<"+"<<b<<"i"<<endl;
    }
    void getDataByClass(complex c1,complex c2){
        cout<<endl;
        
        a=c1.a+c2.a;
        b=c1.b+c2.b;
    }
};
int main()
{
    complex c[3];
    c[1].setdata(3,4);
    c[1].print();

    c[2].setdata(12,7);
    c[2].print();

    c[3].getDataByClass(c[1],c[2]);
    c[3].print();

    return 0;
}