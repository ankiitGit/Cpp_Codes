//return type 2

#include<iostream>
#include<string>
using namespace std;
int* test(int* a) 
{
   cout<<"test is called "<<endl;
   *a=*a+19;
   return a;  //this is fine
}

int main()
{
    int x=100;
    int *y=&x;

   cout<<y<<endl;

   cout<<test(&x)<<endl;
//    cout<<"now x is "<<x<<endl;

// //    test(&x)+=200;
//    cout<<x<<endl;
//    cout<<y<<endl;

   int g;
  
   

    return 0;
}