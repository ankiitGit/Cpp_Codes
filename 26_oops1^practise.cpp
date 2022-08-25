#include <iostream>
#include <string>
using namespace std;
class smartphone
{
private:
    float price;
    // float tellprice(float, string);   ye function private hota to isko class methods ke alawa koi use ni kr pata 
    // lekin agr ek private function ko huma agr class ke ek public function me nesting krke use kre to ho skta hai
    // well see in next  c0de 

public:
    string name;
    int ramInGB;
    int batteryInMH;
    float tellprice(float, string);
};

float smartphone ::tellprice(float n, string s)
{
    price = n;
    cout << "the price of " << s << " is " << n;
    return 0;
}

int main()
{
    float x;
    smartphone mi;
    // cout<<"name of smartphone is\n"; // ye krne pe string bs first word hi catch kregi like redmi n0te 5 ka bs redmi hi
    mi.name = "redmi note 5";
    mi.batteryInMH = 4000;
    mi.ramInGB = 8;

    smartphone samsung;
    samsung.name = "samsung galaxy note 5";
    samsung.batteryInMH = 2500;
    samsung.ramInGB = 4;

    cout << endl;
    cout << "the name of smartphone 1 is " << mi.name << endl;
    mi.tellprice(25000, mi.name);
    cout << endl;
    cout << "the battery (in mah) of "<<mi.name<< " is " << mi.batteryInMH << endl;
    cout << "the ram (in GB) of "<<mi.name<< " is " << mi.ramInGB << endl;

    cout << "\n___________________________________\n\n";

    cout << "the name of smartphone 2 is " << samsung.name << endl;
    samsung.tellprice(50000, samsung.name);
    cout << endl;
    cout << "the battery (in mah) of "<< samsung.name<<" is " << samsung.batteryInMH << endl;
    cout << "the ram (in GB) of "<< samsung.name<<" is " << samsung.ramInGB << endl;

    return 0;
}