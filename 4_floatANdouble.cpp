//code nhi hai bad ye hai ki decimal values by default long double ki hoti hai 
//float bhi decimal ke lie hi hoti hai lekin agr kahi double bhi aa gya to preference double ko milegi 
//isilie agar float ko specify krnna h to we'll use f or F after the number has been used

#include <iostream>
using namespace std;
int main()
{
    // float a = 34.3f ;
    // double b = 34.3 ;
    // float c = a+b ;
    // cout<<c;
    
    int d=5;
    int e=4;
    cout<<d/e<<endl; /*isse sirf integer value aayi*/
    cout<<float(d/e)<<endl; /*ye kaam ata hai ki jo bhi value aayi use as a float me convert krke likhe*/
    cout<<(float)d/e<<endl;/*ye actually float me convert kr deta hai*/

    float f;
    f=(float)d/e;
    // f=float(d/e);
    cout<<f<<endl;

    return 0;
}


