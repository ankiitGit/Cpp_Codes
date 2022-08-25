//POINTERS:
// int x=10;
// int *y=&x;

/*
POINTERS: it is pointer which just points to the address(memory block) of the varibale to which it is pointing 

1. we just gave pointer y ( whose data type is int * ) to address of x

2. new memory is assigned to y -------> y itself will be stored in memory

imp 3.  y is as same as &x 


5. initialization is not important with declaration --------> we can do (declare) int *y; (and then initialize) y=&x;

6. any updtaion in *y will cause updation in x (as well as *y which is obvious)

7. updation in y is allowed (that's the differnce b/w 'address of 'and 'refrence of' refrence me &y me allowed nhi tha jabki is case ka y and us case ka &y same h dekha jae to )
{ 6 is about *y(derefrenced that means we are back to x {only if no preupdation took place in y} ) .....7 is about y(address) }

8. ' Refrence of ' --> & is at left side of assigment operator.   ' address of ' --> & is at right side of assigment operator 

8_2. refrence me & data_type ke pass rhta hai and address me data_type se dur (right side of = operator )
(eg int&y=x ---> & is close to int therefore refrence ,,,,,,,,,,,,, int*p=&x --------> & is away from int therefore refrence )

imp 9. we always need to derefrence while recving a pointer */


#include<iostream>
#include<string>
using namespace std;

int main()
{
    int x=10;
    int *y=&x;                     //---> refrencing ki jagah call it addressing or address of  

    cout<<"adress of x is "<<&x<<endl;
    cout<<"adress of x is "<<y<<endl<<endl;

    cout<<"adress of y is "<<&y<<endl<<endl;

    cout<<"value of x is "<<x<<endl;
    cout<<"value of x is "<<*y<<endl;  //----> derefrenced
    return 0;
}