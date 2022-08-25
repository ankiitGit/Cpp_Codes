//like endl we have set widht (setw) command 
//but for that we need iomanip library/header file 

#include <iostream>
#include <iomanip>

using namespace std ;

int main(){
    
int a = 234;
float b =123467;
int c = 4 ;

cout<<"the value of a is" <<setw(14)<<a<<endl; //14 humne lenght define krdi ab vo right se 14 num jamana start kr dega ,agar num nhi h to phir simple emoty jagah (jesa hua bhu hai)
cout<<"the value of b is" <<setw(14)<<b<<endl;
cout<<"the value of c is" <<setw(14)<<c<<endl;


return 0;
}



