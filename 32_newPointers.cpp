// new pointers are used to allocate memory dynamically from the heap 
/// iska abhi ye smjhlo ki hume jitni memory chahiye hum utni leke apna kaam krte hai 
// or kaam hone ke bad usko vapas se delete kr dete hai

// syntax ----> datatype *pointer_name = new datatype(value);
//         or
//  syntax ----> datatype *pointer_name ;        //phle declare kiya sirf [pointer ]
//               pointer_name = new datatype;   //phir declare kia new pointer 
//               *pointer_name=value ;          // ye dereference krke value di

#include<iostream>
using namespace std;
int main()
{
    int *ptr=new int(45);
    cout<<*ptr<<endl;

    // *ptr=90;             // ye to bs btaya ki valuie change ho skti hai yahan se 
    // cout<<*ptr<<endl;


    // after using we will delte this new pointr i.e. ptr 

    delete ptr;
    return 0;
}