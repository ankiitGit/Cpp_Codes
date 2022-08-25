/*syntax for 'while loops'
while(condition)
{
    code
}
*/

#include<iostream>
using namespace std;
int main(){
    int i=1 ;     //for loop me ye value na bhi define kre to chlga kyunki intialisation me hum kr denge lekin yaha pe krni pdegi
    while (i<=10)
    {
        cout<<i<<endl;
        i++;
        
    }
  return 0;  
}

/*syntax for 'do while loops' 
[difference ye hai ki do while loop sbse phli bar to print hota hi hai chahe condition true ho ya false] 
do{
    code
}
while(condition);

*/