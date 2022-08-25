//hum kisi cinstant ki value ko repeat krte h to bad wali value consider kr leta hai or islie agar hm chahte hai ki hmara cons hi rahe throught to hm CONSTANT ka use karte g
#include <iostream>
using namespace std;

int main()
{
    int a = 14;
    a = 5;
    cout<<a ; //to hmara ab a ki value 5 print krega lekin agr hum [cons int ka se krege to phir value fix ho jaegi hum a ya b ko aage use hi ni kr paege]

    const int b = 111;
   // b = 34; //error bta dega ki b to const hai uski value change nhi ho sakti
    cout<<b;

    return 0;

}