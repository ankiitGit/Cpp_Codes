//febonacii using recursions 1 1 2 3 5 8 13 21 34.... index 0 1 2 3 4 5 6,,,,
#include<iostream>
using namespace std;

int fib(int n){
    if(n<2){
        return 1;  //kyunki phle 2 term 1 hi aaega
    }
    return fib(n-2)+fib(n-1);
}

// fib(5)
// fib(4) + fib(3)
// fib(3) + fib(2) + fib(2) + fib(1)
// fib(2) + fib(1) + fib(),,,

int main()
{
    int a;
    cout<<"enter\n";
    cin>>a;
    cout<<"the value of fibbonaci series at position "<<a<<" is "<<fib(a);
    return 0;
}