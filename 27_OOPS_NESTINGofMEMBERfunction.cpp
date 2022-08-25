// nesting of member function mtlb class ke function k andr class ka hi function call krna

#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s;
    void check_binary(void); //check_binary function ka bs naam h ....iska classs k nam se koi lena dena ni h

public:
    void read(void);
    void display(void);
    void compliment(); // this is to show that we dont need any type of datatype inside void
};

void binary::check_binary(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "not a binary number\n";
            exit(0); //ye syntax end krne k lie ki bs iske bad rogram run nhi krna h
        }
    }
}

void binary::compliment()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
    cout << "your number after compliment is ;  " << s << endl;
}

void binary::display()
{
    cout << "your number before compliment is ; " << s << endl;
}

void binary::read()
{
    cout << "enter a binary number\n";
    cin >> s;
    check_binary(); // this is known as nesting of member function
}

int main()
{
    binary b; // ab ye ka kahi bhi use ni kia humne ye sirf ek driver function h
    b.read(); // kyunki class ke fumcttion ko hum object.functionName se call krte hai
    b.display();
    b.compliment();
    // b.check_binary(); ye run hi nhi kr skte hum , ye private fnction hai isko class ka hi koi member use kr skta hai
    //isilie humne nesting ki helo li class ke kisis funlic function ke andr call krke humne iska use kia h
    return 0;
}