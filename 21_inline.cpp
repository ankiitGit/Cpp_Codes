#include<iostream>
using namespace std;
inline int sum(int a,int b){   //just to call function repeatedly takes less time but not so effective to use so neglect this 
    int c=a+b;
    return c;
}
int main()
{
    int a,b;
    cout<<sum(a,b);
    return 0;
}