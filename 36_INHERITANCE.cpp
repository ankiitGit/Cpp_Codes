#include <iostream>
#include <string>
using namespace std;

class employee
{
    int id;

public:
    float salary;
    string name;
};

/*
SYNTAX----->>>>> 
After writing the class keyword we have to write the derived class name and then put a “:” sign.
After “:” sign we have to write the visibility mode and then write the base class name.
*/

// Note:
// 1.Default visibility mode is private
// 2.Public Visibility Mode: Public members of the base class becomes Public members of the derived class
// 3.Private Visibility Mode: Public members of the base class become private members of the derived class
// 4.Private members are never inherited

class programmer : public employee
{ //jab program ke andr salary or name dono apne aap ban jaenge
    public: //ye ab ye naye banare hai unka mode bta rhe h
    int homeCode = 5; // hum derived class me kuch naya bhi ad kr skte hai (member functions bhi)
};

int main()
{
    employee harry, rohan;
    harry.salary = 1000;
    harry.name = "Harry";

    cout << harry.salary << endl;
    cout << harry.name << endl;

    cout << "\n";

    programmer ashu;
    ashu.salary = 500000;
    ashu.name = "Ashu";

    cout << ashu.salary << endl; //jabki programmer class me to salary or name jesa kuch tha bhi nhi lekin ye sab inheritance ho gya base class se
    cout << ashu.name << endl;
    cout << ashu.homeCode << endl;

    return 0;
}