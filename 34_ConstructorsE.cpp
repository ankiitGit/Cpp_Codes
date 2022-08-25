// DEFAULT CONSTRUCTOR vhi ki agr ek argument pass na kro to hum uski default value bhi de skte hai
#include<iostream>
using namespace std;

class Simple{
    int data1;
    int data2;
    int data3;

    public:
        Simple(int a, int b=9, int c=8){
            data1 = a;
            data2 = b;
            data3 = c;
        }

        void printData();

};

void Simple :: printData(){
    cout<<"The value of data1, data2 and data3 is "<<data1<<", "<< data2<<" and "<< data3<<endl;
}
int main(){
    Simple s(12, 13);  // b pass kr diya to b update ho jaega,c pass nhi hua islie default value lega 
    s.printData();
    return 0;
}
