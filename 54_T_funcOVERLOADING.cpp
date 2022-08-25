#include<iostream>
#include<string>
using namespace std;

void display(int a){
cout<<"first display called "<<a<<endl;
}

template<class t>
void display(t a){
cout<<"tempalized display called "<<a<<endl;
}

int main()
{
    
    display(9);//exact function has the more priority
    display(9.7);
    display('r');

    return 0;
}