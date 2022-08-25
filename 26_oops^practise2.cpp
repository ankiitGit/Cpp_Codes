#include<iostream>
#include<string.h>
using namespace std ;
class sport
{
    private:
    float priceMOney;


   public:
   string name;
   int numOfPlayers;
   int numOfHours =4;
   int money();

   void print(string s){
       cout<<"name of sport of "<<s<<" -> "<<name<<endl;
       cout<<"number of players of "<<s<<" -> "<<numOfPlayers<<endl;
       cout<<"number of hours "<<s<<" -> "<<numOfHours<<endl;
       cout<<"prize money of "<<s<<" -> "<<priceMOney<<endl;

       cout<<"---------------------"<<endl;
   }

};

int sport :: money (){
    float a;
    cout<<"enter money "<<endl;
    cin>>a;
    priceMOney=a;
    return 1;
}

int main()
{
    sport s1;
    cout<<"enter name of sport 1"<<endl;
    cin>>s1.name;
    cout<<"enter number of player of sport 1"<<endl;
    cin>>s1.numOfPlayers;
    s1.numOfHours=3;
    s1.money();
    string k1="first sport";
     
    

    sport s2;
    cout<<"enter name of sport 2"<<endl;
    cin>>s2.name;
    cout<<"enter number of player of sport 2"<<endl;
    cin>>s2.numOfPlayers;
    // s2.numOfHours=4;
    s2.money();

    string k2="second sport";

    s1.print(k1);
    s2.print(k2);

    

    
    return 0;
}