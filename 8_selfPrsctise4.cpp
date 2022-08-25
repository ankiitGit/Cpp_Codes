#include<iostream>
using namespace std;
int main ()
{
    int num;
    cout<<"how many pass do you have?"<<endl;
    cin>>num;

    switch (num)
    {case 3:
        cout<<"you are in";
        break;
        
    case 5:
        cout<<"you will need to give a shot";
        break;
        
    default :
      cout<<"see you next time";
       break;
    }        
}