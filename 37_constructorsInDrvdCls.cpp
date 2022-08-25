// virtual ki priority jyada h 
// normal base class ki usse kam
// then in the order they have been wirtten 
// sbse kam hai direved class ki ye hmesha last me hi call hoga (agr multilevel inheritance nhi hai to )
// gar mutilevel ingeritance hai to us order me call hoga jis order me inheritat hua hai



// case 1 ----> single inheritance 
// case 1.1 ----> no constructor in derived class (only base class construcor is there )


            
#include<iostream>
#include<string>
using namespace std;

class base {
    int a;

   public:
    base(int x ){
        a=x;
        cout<<"the base class' constructor called "<<endl;
    }
    
    void print ()
    {
        cout<<"the value of a is "<<a<<endl;
    }
};

class derived : public base{
   public:
    derived(int y):base(y){
        cout<<"the derived class' constructor called "<<endl;
        // hum derived constructor bana hi nhi rhe actually hum bta rhe h ki ye y base wale ka hai.........agr hume derived ka constructor likhna hita to hum or variable likh dete e...agle case se smjh aa jaega 
    }
};

int main()
{
    // derived ankit;  ye error through krega ...kyunki ultimately function 'base' (constructor) ab derived class ka memeber function ban chuka hai...or us fucntion ko ek argument i jarurat hai 
    // vo constructor base naam ka hai to btana pdega ki ye base ka hai 
    
    derived ankit(101);
    ankit.print();
   
    return 0;
}