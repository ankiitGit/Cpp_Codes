//isme hum kisis pointer ke adress ko bhi point krte hai

#include<iostream>
using namespace std;
int main()
{
    int a = 3;

    int*b = &a;

    int**c = &b;

    //*c b ka adress bataega 
    //**c ye adress of adress of b btaega

    cout<<"the adress of a is"<<b<<endl;
    cout<<"the adress of b is"<<c<<endl;
    cout<<"the adress of adress of b is "<<*c<<endl;
    cout<<"the value of a is "<<*b<<endl;
    cout<<"the value of value of value of b is "<<**c<<endl;
    return 0;
}

//agr * define krke likhre hai to bina * ke likhna (mtlb ek star kam krke likhna ) ka mtlb hai ki uska adress pta krna 
// do star kam krke likhna mtlb adress od adress of