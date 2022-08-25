//function vhi int main() is type fe function 
//lekin hum 2 3 function ek sath execute karenge 

#include<iostream>
using namespace std;

int sum(int a,int b)  //ye naya funtion jo humne define kia 
{
    int c = a+b;
    return c;            //ye return c kr dega finally 
}

int main()
{
    int num1,num2;
   cout<<"enter number 1"<<endl;
   cin>>num1; 
   cout<<"enter number 2"<<endl; 
   cin>>num2; 
   cout<<"calling and printing------>>>"<<" the sum is "<<sum(num1,num2)<<"\n___________";  //ye humne funtion call kia //or usi ko cout bhi kia sirf function call krte to kuch nhi hota
   
   
   cout<<"\njust called the function but printed num1 and num2 only \n"   
    <<num1<<endl<<num2<<endl
    <<"so this shows SUM cant have powers to change actual parameters\n";
   return 0;
}

//sbse phle main function operate hota hai to usko pta hona chahiye tumne jo bhi function define kia hai