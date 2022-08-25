#include <iostream>
using namespace std;

int main() {
    int lit;
    cout<<"how much water do you intake ?"<<endl;
    cin>>lit;
    
    switch(lit)
    {
        case 1:
        cout<<"you need more water ";
        break;
        
        case 2:
        cout<<"you need little more water ";
        break;
        
        case 3:
        cout<<"you are at intermediate level";
        break;
        
        case 4:
        cout<<"you are at advance level";
        break;
        
        default :
        cout<<"you take enough water.CONGRATULTIONS";
        break;
    }
   
    return 0;
}

//return 0; //ye likhte vakt kabhi kabhi dikkt aaye to bracket ke bahar le jake likhna h
