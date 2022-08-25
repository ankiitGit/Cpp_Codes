// 1st use 

#include<iostream>
#include<string>
using namespace std;
class point {
    int a;
   public:
    void setdata(int a){
               // a=a;  // this will give garbage value ....kyunki phle local variable excute hote hai ...
              // to avoid this we use 'This' pointer 

               this->a=a;
               

    }
    void getdata(){
        cout<<"the value of a is "<<a<<endl;
    }

};

int main()
{
    point p;
    p.setdata(14);
    p.getdata();

    return 0;
}