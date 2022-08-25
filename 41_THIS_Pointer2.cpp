// 2nd use ,,,, this is actually very improtant 

// 'this' is a keywrod which is a pointer to an object which invokes the member function

// to agar hume ye object(to which This is pointing ) return krwana hai to we use This

// 'this' point krta hai us object par jisne function call kiya hai 

// abhi ke lie bas syantax yad krle (chaining of methods hai ye )
// class_name & function_name{   ---> vo function jise call krega apna object(or object jo call krega function usi pe point krega this pointer )
//     body 
//     return *this;
// } 

#include<iostream>
#include<string>
using namespace std;
class point  {
   int a;
   public:
    point & setdata(int a){
        cout<<"setdata is called \n";
        this->a=a;
        return *this ;   // ye defrencre krke return kr diya ....mtlb hume hamara object hi il gya eventually 
        // returns the object
        // ek 'point' return krega vo
    }
    
    void getdata(){
        cout<<"the value of a is "<<a<<endl;
    };

};

int main()
{
    point p;
   // p.setdata(10);   // -----> actually jab ye fucntion invoke hoga ,or ye object (p) hi return kr dega to sidha yahan se bhi hum agle fucntion ko call kr sjte hai     
     
    p.setdata(10).getdata();     //----> function ki chaining bhi ho gyi ek tarike se 
    return 0;
}