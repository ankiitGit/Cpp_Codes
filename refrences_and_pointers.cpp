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