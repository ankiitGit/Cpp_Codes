// '\0' this is null character ...this basically shows the ending of some character value 

#include<iostream>
using namespace std;
int main()
{
    char name[100]="raHul"; //double inverted commas 

    //if we want to print then simply the way we used to print our aray 
     
    // int i=0;
    // while (name[i] != '\0')
    // {
    //     cout<<name[i]<<endl;
    //     i++;
    // }
    
    cout<<endl<<name[2]<<endl<<name[8]; //we can access some particular index 

    // cin>>name;

    //directly print the full array
    cout<<name;


    
    return 0;
}