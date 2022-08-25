// phle hi initialise krdo variables(kuch ki ya even sab ki) ki value
// jo phle decalre hua (variable) vo phle execute hina jaruri hai 
// syntax as same as derived and base class wala 

#include<iostream>
#include<string>
using namespace std;
class test {
   int a;
   int b;

   public:
    // test(int i,int j):a(i),b(j)
    // test(int i,int j):a(i),b(9+j)
    // test(int i,int j):a(i+44),b(9+j)
    test(int i):a(i),b(a+4)
    // test(int i):b(i),a(b+4) --> will give error as a is declared first so value will be assigned to a first
    {  // ye a and b initialize ho gye
        
        cout<<"the constructor executed \n";
        cout<<"the value of a is " <<a<<endl;
        cout<<"the value of b is " <<b<<endl;
    }

};
int main()
{
    // test t(6,9);
    test t(6);

    return 0;
}