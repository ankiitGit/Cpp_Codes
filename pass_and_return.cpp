/* 

// A while returning 
(remember that a statement should be of complete type )

1. int data type then         int a; --> a is an integer 
2. int & data type then       int &a ; ---> a is an integer 
3. int * data type then       int *p; ---->(this p is not of int type ,it is somthing like p=&a) whre p must store some adress vlaue  or int * &a ----> in both case a is integer (not p ,,,p is of int* type )
// returning 3rd one from stack makes no sense it will be useful in heap memory
*/

// B while receving 
#include<iostream>
#include<string>
using namespace std;

void fun1(int a){ // argument in fun1 is of integer type so it must recv an integer
// int a=x; -----> noraml
    cout<<"fun 1 is called \n";
    a=a+1;
}

void fun2(int& a){ // integer adress type --> this is simply a refrence so must recv and integer value
// int &a=x;  ---> refrence to x
    cout<<"fun 2 is called \n";
    a=a+1;
}

void fun3(int* a){ // this is a pointer to an integer so must recv a adress of some integer variable
// int *a=&x;  ---> pointer to x
    cout<<"fun 3 is called \n";
    *a=*a+1;
}


int main()
{
    int x=10;
    cout<<x<<endl;
    cout<<&x<<endl<<endl;

    fun1(x);
    cout<<x<<endl;
    cout<<&x<<endl<<endl;

    fun2(x);
    cout<<x<<endl;
    cout<<&x<<endl<<endl;
    
    fun3(&x);
    cout<<x<<endl;  // ek bar phle badh gya
    cout<<&x<<endl<<endl;

    return 0;
}
