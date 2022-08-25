#include<iostream>
using namespace std;
int main()
{
    int a = 4;
    int* b= &a;
    int**c = &b;
    int ***d = &c;
    cout<<b<<endl; 
    cout<<*b<<endl;
    cout<<c<<endl;
    cout<<*c<<endl;
    cout<<**c<<endl<<endl;
    cout<<d<<endl;
    cout<<*d<<endl;
    cout<<**d<<endl;
    cout<<***d<<endl;
    return 0;
}