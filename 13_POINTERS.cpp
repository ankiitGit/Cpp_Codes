/*pointers are "data type" which are used to adress the other data type */

#include<iostream>
using namespace std;
int main(){

    int a=3;
    int* b=&a; //ye kind of meaning ho gya hai
    cout<<"the adress of 'a' is "<<b<<endl;   //isi ko hum bina pointer hi help se ' &a ' krke pta kr skte hai
    cout<<"the adress of 'a' is "<<&a<<endl;


    //&a means adress of a
    //*b is a pointer which will point the adress od data type which we want to point out
   
    return 0;
}