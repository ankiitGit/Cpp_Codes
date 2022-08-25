//arrays are used to store same tyoe of values in continue block forms
//counting 0 se start hoti hai

#include<iostream>
using namespace std;
int main()
{
    int marks[]={22,34,1,23}; //yaha pe marks[4] likhna chahiye vese to lekin vs code smjhdar hai

    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

    cout<<endl;

    //ek or tarika ye hai ki
    int age[4] ;
    age[0]=2;
    age[1]=6;
    age[2]=12;
    age[3]=7;

    cout<<age[0]<<endl;
    cout<<age[1]<<endl;
    cout<<age[2]<<endl;
    cout<<age[3]<<endl;
    
cout<<endl;
    //hum values ko arrays ke bich me change bhi kr skte hai 
    //bas print hone e phle hume kahi pe bhi chnge kr deni hai

    int waterAmount[] = {23,54,56,67,87};

    waterAmount[2] = 13;        //this to show that we can change the value too ab third place (0,1,2) yani 2 pe 56 ki jagah 13 ho jeega

    cout<<waterAmount[0]<<endl;
    cout<<waterAmount[1]<<endl;
    cout<<waterAmount[2]<<endl;
    cout<<waterAmount[3]<<endl;
    cout<<waterAmount[0]<<endl<<endl;     //this is to show ki hum print kr skte hai vapas 

    //we can also use loops with array which makes our task a bit easy

    int numberofcars[8]={9,6,0,2,4,3,4,12};
    for (int i = 0; i<8; i++)
    {
        cout<<"the numbes of cars "<<i<<" have "<<numberofcars[i]<<endl;
    }
    


    return 0;
}