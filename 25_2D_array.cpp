#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter rows and cols";cin>>a>>b;
    int m[a][b];
    cout<<"enter the elements of matrix";
    for (int i = 0; i < 5; i++)
    {
        for (int j =0; j < 3; j++)
        {
            cin>>m[i][j];
        }
        
    }
    cout<<"________________\n"
        <<"the matrix is\n"
        <<"________________\n";
        
    for (int i = 0; i < 5; i++)
    {
        for (int j =0; j < 3; j++)
        {
            cout<<setw(2)<<m[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}