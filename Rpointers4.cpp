//return type

#include<iostream>
#include<string>
using namespace std;
int test(int *a) // jese hi & pass ho smjh jana derefrence hoga and then immeditaily think of ' *y ' ////////////////////(not y ....y refernece me dhyan krna )
{
  cout<<"test is called "<<endl;
  *a=*a+19;
//   return a;  //this will give an error as derefrence krna mtlb original variable jesa hota hai exactly vo nhi hota 
}

int main()
{
    int x=100;
    int *y=&x;

   // test(x); // will give an error // 9th point 

   test(&x);
   cout<<"now x is "<<x<<endl;

    return 0;
}