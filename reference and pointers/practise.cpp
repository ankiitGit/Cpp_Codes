#include<iostream>
using namespace std ;

int test (int & a)
{
    a+=22;
    return a;
}

int & test2(int & a){
    a=a+2;
    return a;
}

int main()
{
    int x=10;
    test2(x) += 1000;
    cout<<x;
     
    int y=9;
    test(y) += 500;
    cout<<y;



    return 0;
}