#include<iostream>
using namespace std ;
class point {
    int a,b;
    public:
    point(int c,int d){
        a=d;
        b=c;
        cout<<"the automatic value is "<<a<<" and "<<b<<endl;
    }

    point(int c){
        a=40;
        b=c;
        cout<<"the automatic value is "<<a<<" and "<<b<<endl;
    }

};
int main()
{
    point p(70,60);
    
    return 0;
}