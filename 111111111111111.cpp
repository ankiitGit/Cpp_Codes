#include<iostream>
using namespace std;
class student{
    int a,b=10;

    public:
    int c,d;
    void setdata();
    void newd();
};

void student ::setdata(){
 cout<<"enter the value of a ";cin>>a;
 cout<<a<<" "<<b;
}

void student :: newd(){
    b=122;
   
}

int main()
{
    student ankit;
    ankit.setdata();
    cout<<endl;
    ankit.newd();
    cout<<endl;
    ankit.setdata();
    cout<<endl;
    
    return 0;
}