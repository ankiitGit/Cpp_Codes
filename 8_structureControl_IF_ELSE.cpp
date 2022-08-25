#include<iostream>

using namespace std;

int main()
{
    int marks;
    cout<<"enter your maths marks"<<endl;
    cin>>marks;

    
        if (marks<33)
        {
        cout<<"you are failed";
        }
        else if (marks>60)
        {
        cout<<"you are promoted but need to work";
        }
        else{
        cout<<"you are promoted. congratulations!!";
        }
return 0;    
}   

