#include<iostream>
using namespace std;
void callByValue(int a,int b)
{
   int c=a;
   a=b;
   b=c;
}

void callByRefrence(int &a,int &b)
{
  int c=a;
   a=b;
   b=c;
}

void callByAdress(int *a,int *b)
{
   int c=*a;
   *a=*b;
   *b=c;
}

int main()
{
   int x=78;
   int y=60;
   
   callByValue(x,y);
   cout<<"no swapping happened\n";
   cout<<"x="<<x<<endl;
   cout<<"y="<<y<<endl<<endl;
   
   callByRefrence(x,y); //hum yaha pr nhi kr rhe & kyunki hum a and b ki condition bta rhe ki ye h x and y ke reference
   cout<<"swapping happened\n";
   cout<<"x="<<x<<endl;
   cout<<"y="<<y<<endl<<endl;

   callByAdress(&x,&y); //in pointers we are pointing adress so we are pasiing adress
   cout<<"swapping happened after swapping=original\n";
   cout<<"x="<<x<<endl;   //phle x and y ki value swapp ho chuki h or ab original return krra mtlb it is swapped again
   cout<<"y="<<y<<endl<<endl;
    
   return 0;
}


