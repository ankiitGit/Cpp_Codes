#include<iostream>
using namespace std;
int main ()
{
    int grade;
    cout<<"whats your grade?"<<endl;
    cin>>grade;
    cout<<endl;

    switch (grade)
    {
    case 5:
        cout<<"oops y0u missed a little";
        break;
    
    case 9:
        cout<<"welcome sir";
        break;

    default:
    cout<<"bye bye";
        break;
    }

    int age;
    cout<<endl<<"now can you tell us your age "<<endl;
    cin>>age;
    cout<<endl;

    if(age<18)
    {
        cout<<"you have qualified the first round but you didnt clear the age creteria ";
    }
    else if (age>=18 && grade>5)
     {
         cout<<"you qualified second round too";
     }
     else
     {
         cout <<"you are out";
     }


     /*syntax for else if
      if(condition)
     {
         code
     }
     else {
         code
     }

     syntax for swtich case 
     swtich(condition)
     {
         case1 --- :
     code
     break;

         case2 ---:
     break;

         case3 --- :
     break;
     }
     */ 
 return 0;
}