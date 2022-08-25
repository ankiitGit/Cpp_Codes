 
// arrays ke pointers me thoda variation hai islie yah pe &a vgrh lgana bhi shi ni h sidha sidha kaam hai idhr 
// ab array me tum adress fund krre ho to phle sirf phli entry ka adress aaega isi tarah hum ek badhate jaene or ek ka adress ata jaega

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int marks[]={12,64,43,25};
    int* p = marks;
    cout<<"the value of pointer *p is   "<<setw(5)<<*p<<endl; 
    cout<<"the value of pointer *p+1 is "<<setw(5)<<*(p+1)<<endl;
    cout<<"the value of pointer *p+2 is "<<setw(5)<<*(p+2)<<endl;
    cout<<"the value of pointer *p+3 is "<<setw(5)<<*(p+3)<<endl;
    //hume sirf marks likha &marks nhi

    //arr is alreay a pointer pointing the adress of 0th value
    // we can directly use it too
    cout<<"_______________________________\n"<<"without using any extra pointer\n"
    <<*(marks)<<endl
    <<*(marks+1)<<endl
    <<*(marks+2)<<endl
    <<*(marks+3)<<endl;
                     
    return 0;
}
