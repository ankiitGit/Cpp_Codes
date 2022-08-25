#include <iostream>
using namespace std;
class employee
{
public:
    int id;
    void getdata()
    {
        cout << "enter the id of employee\n";
        cin >> id;
    }

    void setdata()
    {
        cout << "the id of this employee is ; " << id<<endl;
    }
};

int main()
{
    employee a[4];
    for (int i = 0; i < 4; i++)
    {
        a[i].getdata();
        a[i].setdata();
        cout <<"\n";
    }

    return 0;
}