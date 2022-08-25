#include <iostream>
using namespace std;
int product(int a, int b)
{
    static int c = 5; //iintialize hoga yahan se lekin uske bad run nhi hoga
    c = c + 1;        //or yaha iski value retain hoti rhegi ,this is amazing
    int d = a * b + c;

    return d;
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << product(a, b) << endl;
    cout << product(a, b) << endl;
    cout << product(a, b) << endl;
    cout << product(a, b) << endl;
    return 0;
}