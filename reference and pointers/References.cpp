/*
what we have learnt so far is ;

REFRENCES:
int x=10;
int &y=x;

/*
REFERENCES: it is adress only but we call it reference (slightly different though) as same as we call water as JAL in pooja 

1. we just gave another name to x

2. no new memory is assigned to y -------> it is as same as imran/moin ,mahak/bittu ,asmita/honey

3. &y is as same as &x ------------> which is very obvious as both are same only  

4. we have just given reference(hidden pointer) of x as y 

5. initialization is important with declaration only  --------> we cant do (declare) int &y; (and then initialize) y=x;

6. also any updtaion in y will couse updation in x (as well as y which is obvious)

7. no updation in &y is allowed (that's the differnce b/w 'address of 'and 'refrence of' ,&y is address of x but can't access that i.e. cant do modification in that)
{ 6 is about y(another name) .....7 is about &y(address) }

8. ' Refrence of ' --> & is at left side of assigment operator.   ' address of ' --> & is at right side of assigment operator 

8_2. refrence me & data_type ke pass rhta hai and address me data_type se dur (right side of = operator )
(eg int&y=x ---> & is close to int therefore refrence ,,,,,,,,,,,,, int*p=&x --------> & is away from int therefore refrence )

//// 9. with & we can modify our original but without & we cant (while passing as parameter to a fucntion or while recving the parameters )

*/

// // 1. basic understanding

// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
//     int x=10;
//     int &y = x;                 //  1 2 5
//     cout<<&y<<" "<<&x<<endl;    //  3
//     // &y++;                    //  7

//     y+=2; 
             
//     cout<<x<<endl;             //  6
//     cout<<y<<endl;    
    
//     return 0;
// }

//----------------------------------------------------------------------------------------//

//  2. passing parameters 

#include<iostream>
#include<string>
using namespace std;
void change (int & a);

int main()
{
    int x=11;

    change(x);         // actually ho kya rha hai   step1. humne pass kiya x .....
    cout<<x<<endl;

    return 0;
}

void change (int & a)  // step2. change ne receive kiya &x (i.e. refrence of x ) -----------> whenever you pass variable as a refrence , think of a defination of refrence and imagine bittu of that (i.e. x pass kiya &x recv hua ...immediatly dimag me aana chahiye ki &y ) 
{
    a=a-2;
}

//  whenever you pass variable as a refrence , think of a defination of refrence and imagine bittu of that (i.e. x pass kiya &x recv hua ...immediatly dimag me aana chahiye ki &y ) 
//  ab &y ke bare me soch liya to sidhi si bat hai &y ke sath kuch nhi hoga jo bhi hoga vo y ke sath hi hoga and jo bhi hoga use x ko bhi jhelna hai



