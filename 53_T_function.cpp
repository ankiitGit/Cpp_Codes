// hum template clss ke lie nhi fucntion ke lie bhi bana sakte hai 
// syntax ekdm same rahega 

#include<iostream>
#include<string>
using namespace std;
template<class t1,class t2>

// function ne vo ni krna pdega <> kyunki jab funcion ko call krege to jo bhi data type ka variable pass krege t1 t2... us according behave kr lenge 


float avg(t1 a, t2 b){
    float c= (a+b)/2;
    return c;
}

int main()
{
   cout<<"the average of the two number we passing is  "<<avg(4,5.2)<<endl;  // we passed int and float 
   cout<<"the average of the two number we passing is  "<<avg(4.7,5.2)<<endl;  // we passed float and float 
   cout<<"the average of the two number we passing is  "<<avg('c',2)<<endl;  // we passed char and int ofcourse misbehave krega 


    return 0;
}