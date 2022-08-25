/* int ko point krwane ke lie int point type ka poiner use krte hai

int  a=30;
int *p= &a;

*/

// isi tarah agr kisi class ke object ko print krwana hai to no doubt usme class aagegi uske data type ki jagah

/* 
1 also abhi tk pointer me fuction jesa hum kuch use ni krte the lekin yahan pr agr kisi object ka function mtlb class method call krna hai to
2 phle use refrenced krdo 
3 then use dereference krdo ,taki ultimately uski original value pe aa jae
4 ye directly object ki help se hi kr dete // pr abhi pointer ka sikhre hia islie /....kaam aayega 
*/

#include<iostream>
#include<string>
using namespace std;

class complex {
  int real ,imaginary;
   public:
   void setdata(int a,int b)
   {
      real=a;
      imaginary=b;
   }
   void getdata()
   {
      cout<<"the value of real part is "<<real<<endl;
      cout<<"the value of imaginary part is "<<imaginary<<endl;
   }

};

int main()
{
    
    /*
    1 int a=50;

    2 int *p=&a;----> refrencing - stroing the adress of a in a pointer

    3 cout<<*p; ----> derefrencing -back to original value (casically is adress pe kya maujud hai )

    */

    cout<<"\ngoing full traditionally\n";

    /* 1 */ complex c1;

    /* 2 */ complex *ptr=&c1;

    /* 3 */  (*ptr).setdata(2,4); 
    (*ptr).getdata();  


    cout<<"\ndoing the same work ( bas (*ptr) ye sab ni likhna pdega ) using arrow pointers \n";
    ptr->getdata(); // arrow operator latently derefrence the pointer 


    cout<<"\nnow we are using 'new' pointer to dynamically making the obejct\n";
    complex *p=new complex;

    (*p).setdata(12,24);
    (*p).getdata();

    cout<<"\nnow using 'new' pointer (dynamic creation of pointer) as well as using ARROW pointes \n";
    complex *t = new complex;
    t->setdata(13,56);
    t->getdata();

    return 0;
}