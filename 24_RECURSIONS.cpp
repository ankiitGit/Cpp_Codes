#include<iostream>
using namespace std;
//factorial n!   =n*(n-1)!   =n*(n-1)*(n-2)!  and so on
int factorial(int n){

    // return n*factorial(n-1);  //ye hai recursion   
    //lekin sirf yahan tk to ye chalta jaega rukega hi nhi
    // to ab aati hai base condition

    if (n<=1)
    {
        return 1;            //ye vo condition hai jab factorial function m 1 aate hi sidha 1 rwturn krke bat khtm
    } 
    return n*factorial(n-1);
// Step by step calculation of factorial(4)
// factorial(4) = 4 * factorial(3); 
// factorial(4) = 4 * 3 * factorial(2);
// factorial(4) = 4 * 3 * 2 * factorial(1);
// factorial(4) = 4 * 3 * 2 * 1;
// factorial(4) = 24;

}
int main()
{
    int a;
    cout<<"enter\n";
    cin>>a;
    cout<<factorial(a);
    return 0;
}