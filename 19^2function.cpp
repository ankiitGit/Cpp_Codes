//last me humne dekha tha ki function call krne se actuall values nhi bdlti bs values temrorily pass hoti hai isilie usko bolte hai CALL BY VALUE

//lekin agar hume values ko modify bhi krwana hai to use pointers basically adress and this is called
//CALL BY REFRENCE 

#include<iostream>
using namespace std;
int increament(int &a){  //yaha par adress aya
    a++;                 //yaha pr adress ke zariye modify hua
    return a;
}


int main()
{
    int num=10;
    increament(num);  // function call kia CALL BY REFRENCE
    cout<<num;        // ab actual parameter ko bhi change kr diya adress ke through
    return 0;
}