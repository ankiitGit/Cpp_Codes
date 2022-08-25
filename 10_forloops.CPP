/*SYNTAX 
for (intializattion; condition; updation)
{
    loop body (c++ code)
}
*/

#include<iostream>
using namespace std;
int main(){

    int i;                    //yha pe i ko value assign krne ki jarurat nhi hai kyunki intialisation to jo hum decide krege vhi se hoga
    for (i=0;i<10;i++)        // agr hume int i nhi krna to hum phle wali step me to hum yha pe kr skte h [for(int i=0;i<10;i++)]
    {
        cout<<i<<endl;
    }

return 0;
}

//INFINITE FOR LOOPS  bhi ban jata h agr hum esi condition dalde to hmesha ture rhti hai
