//  int *y=&x; 
//  updation in *y 

#include<iostream>
#include<string>
using namespace std;

int main()
{
    int x=100;
    int *y=&x;
    cout<<"no updating took place in *y "<<endl;
    cout<<"the initial adress which y is storing is ---> " <<y<<endl;
    cout<<"and hence on derefrencing *y it will give ---> "<<*y<<endl<<endl;

    // we are modifying *y which is nothing but again a x only(for sake of undertanding)
    
    
    *y=*y+3;                                     
    cout<<"updation took place in y "<<endl;
    cout<<"new adress(after y=y+3) which y will store is ---> " <<y<<" (will remain same)"<<endl;
    cout<<"and hence on derefrencing ( *y ) it will give the value at "<<y<<" memory block ---> "<<*y<<endl;
    return 0;
}