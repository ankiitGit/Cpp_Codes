// /*break use hota hai ki kis jagah hume loop ko break kr dena hai irrespective of ki condition kb fail ho rhi hai
// continue use hota hai ki is definite point pe aake loop ko rok ke agle wale se continue krna hai 
// LEKIN CONTINUE OR BREAK DONO SEQUWNCTIALLY KAAM AKERTE HAI 
// MATLAB JIS ORDER ME LIKHE HAI USI ORDER ME KAAM KAREGE 
// AGAR CONT HUM COUT KE BAD LKHEGE TO KOI FAYDA HI NHI
// BREAK AGR COUT SE PHLE LIKH DENGE TO EK STEP PHLE HI RUK JAEGA LOOP
// OR AGR BAD ME LIKHEGE TO USI JAGAH RUKEGA(kyun ki ek bar cout print ho chuka hoga jb tk break lagaenge)
// */

// #include<iostream>
// using namespace std;
// int main(){
//     int i=0;
//     for ( i = 1; i <12; i++)
//     {  
        

       
//       cout<<i<<endl;

//         if(i==3){
//             break; //break me i=7 hone ke loop ko rok deta 
//         }
       
//     }

    
    
//     return 0;
// }

#include<iostream>
#include<string>
using namespace std;

int main()
{
    // continue is wale iteration ko rok dete hai or uske agla wala chala dete hai 
    int pocketMoney=3000;
    for (int i = 0; i < 30; i++)
    {
        if (i%2==0)
        {
            continue;  // yahi pe break till next ietration
        }
        cout<<i<<" -this is an odd"<<endl;
        pocketMoney-=300;
        if (pocketMoney==0)
        {
            break;
        }
        


    }
    

    return 0;
}