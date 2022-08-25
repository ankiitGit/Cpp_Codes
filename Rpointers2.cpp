//  int *y=&x; 
//  updation in y 

#include<iostream>
#include<string>
using namespace std;

int main()
{
    int x=100;
    int *y=&x;
    cout<<"no updating took place in y "<<endl;
    cout<<"the initial adress which y is storing is ---> " <<y<<endl;
    cout<<"and hence on derefrencing *y it will give ---> "<<*y<<endl<<endl;

    //if we modify y then it will store another memory block 
    //and hence *y will point to the variable at that(new) memory block and not to original memory block (memory block of x)
    
    y=y+3;                                     // recall: it was not allowed in refrencing 
    cout<<"updation took place in y "<<endl;
    cout<<"new adress(after y=y+3) which y will store is ---> " <<y<<endl;
    cout<<"and hence on derefrencing ( *y ) it will give the value at "<<y<<" memory block ---> "<<*y<<endl;
    return 0;
}