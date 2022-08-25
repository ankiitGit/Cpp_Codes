#include<iostream>
#include<string.h>
// #include<string>
using namespace std;
int main()
{
    // /*1*/   string s;cin>>s;cout<<s; //we csnt print whole line it will print only first word
    //    string s="ankit patidar is a very high level coder";//double inverted commas are used
    //    cout<<s;
    
    // /*2*/   string s;
    //    getline(cin,s); //fuction to ignore spaces ,,,,,syntax ---> getline(cin,string_name)
    //    cout<<s;
    
    // /*3*/   string s1="ankit"; string s2="patidar"; 
    //    string s3=s1+" "+s2;
    //  cout<<s3; 
    // /* 3 ke lie hi hum ek function use krte hai jese s1 me add krna h s2 ko */
    // s1.append(s2);
    // cout<<s1;
    
    // cout<<s1[4];

    // string abc="annfdidnf kfnid iuruw iuf9uef uneu4";
    // abc.clear(); //to clear our string
    // // cout<<abc;
    
    // erase fuction to earse particular index' value
    // syntax is string_name.erase(lenth_to_earse,position_to_erase);

    string s="ankitPatidar";
    cout<<s.find("dar"); //to find this particular string is at which index
    cout<<endl;
    s.erase(1,4); // n k i t are deleted
    cout<<s<<endl;

    s.insert(1,"NKIT"); //insering NKIT at 1st position
    s.insert(5," "); // insering space at 5th position 
    cout<<s<<endl;

    cout<<s.length()<<endl<<endl;

    for (int i = 0; i < s.length(); i++)
    {
        cout<<s[i]<<endl;
    }
    
    // substring function

    string s1= s.substr(7,4);
    cout<<s1;

    return 0;
}