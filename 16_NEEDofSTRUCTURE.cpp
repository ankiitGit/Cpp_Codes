#include<iostream>
using namespace std;
int main()
{
    char name[20] ;//bracket laga ke hum length define krte hai ye kitna jaruri h bina iske run krke dekh ek bar
    int roll ;
    char adress[20];
    float salaryperhour;
    
    cout<<"whats the name"<<endl;
    cin>>name;

    cout<<endl<<"enter roll number"<<endl;
    cin>>roll; 

    cout<<endl<<"write adress"<<endl;
    cin>>adress;

    cout<<endl<<"salary you need"<<endl;
    cin>>salaryperhour;

    cout<<"the name of student is "<<name<<endl;
    cout<<"the roll number of student is "<<roll<<endl;
    cout<<"the adress of student is "<<adress<<endl;
    cout<<"the salary of student is "<<salaryperhour<<endl;

    cout<<"write name of student 2nd student "<<name<<endl;
    cin>>name;
    cout<<"the name os 2nd student is "<<name;
    return 0;
}