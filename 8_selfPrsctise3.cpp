#include<iostream>
using namespace std ;
int main(){
    int sis;
    cout<<"how many sisters do you have?"<<endl;
    cin>>sis;

    if(sis>=2 && sis<5)
    {
        cout<<"you are lucky";
    }
    else if (sis<2)
    {
        cout<<"you missed good fate";
    }
    else 
    {
        cout<<"your parents need to stop";
    }
   return 0;
}