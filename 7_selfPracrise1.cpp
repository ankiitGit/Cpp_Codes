#include<iostream>
#include<iomanip>
using namespace std ;

int main(){

    int a= 168 , b=1;
    int & c = a;
    float d = 3454.5;
    const int e = -4;
    double f = 787878787.8787;

    cout <<setw(4) <<b+c <<endl;
    cout <<setw(4) <<++b <<endl;
    cout <<setw(4) <<b++ <<endl;
    cout <<setw(4) <<c+b <<endl;
    cout <<setw(4) <<a*2 <<endl;
    cout <<setw(4) << b+int(d) <<endl;
    cout <<setw(4) <<int(b+d) <<endl;

 
    return 0;
}