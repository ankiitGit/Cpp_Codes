// jese array me ointer phla (0th) index ki vlaue store krta hai 
// usi tarah yahan bhi krega 
// int marks[4]={3,4,5,6};
// int *ptr=arr (isme refrencing ki need bhi nhi hoti {we know that} )
// cout<<*ptr; -----> output=3
// cout<<*(ptr+1); -----> output=4
// cout<<*(ptr+2); -----> output=5
// cout<<*(ptr+3); -----> output=6

#include<iostream>
#include<string>
using namespace std;

class item {
   int id ;
   float price ;

   public:

   void setdata(int a,float b){
       id=a;
       price=b;
   }

    void getdata(){
        cout<<"the item id is "<<id<<endl;
        cout<<"the item price is "<<price<<endl;
    }

};

int main()
{

    int p;
    float q;
    
    // item *ptr = new item; ----> ese to ek object banta hai hume abhi araay of object banana hai
    
    item *ptr = new item[3]; // ----> ye 3 object ban gye ek sath ,actually tin pointers hai jo point kr rhe hai tin objects ko
    
    item *temp;
    temp=ptr; // second loop me kaam ayega 

    for (int i = 1; i <= 3; i++)
    {
        cout<<"enter the id and price of item "<<i<<endl;
        cin>>p>>q;
        ptr->setdata(p,q);
        ptr++;   // jese array me ptr+1 then ptr+2
        
    }
   
    for (int i = 1; i <= 3; i++)
    {
        temp->getdata();
        temp++;   // jese array me ptr+1 then ptr+2

    }
        

    return 0;
}