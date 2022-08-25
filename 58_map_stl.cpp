#include<iostream>
#include<map>
#include<string>
using namespace std;

int main()
{
    map <string,int> marksMap;
    marksMap["mahak"]=90;
    marksMap["lokesh"]=98;
    marksMap["ankit"]=86;
    marksMap["imran"]=60;

    map <string,int,char> :: iterator iter;
    for (iter  = marksMap.begin(); iter!=marksMap.end(); iter++)
    {
        cout<<(*iter).first<<" "<<(*iter).second<<" "<<endl;
    }

    // map<allocator<class marksMap>,char> marks2;
    // marksMap["mahak"]='A';
    // marksMap["lokesh"]='A';
    // marksMap["imran"]='C';

    // map<allocator<class marksMap>,char> :: iterator iter2;

    // for (iter2  = marks2.begin(); iter2!=marks2.end(); iter2++)
    // {
    //     cout<<(*iter).first<<" "<<(*iter).second<<" "<<endl;
    // }
  
    

    return 0;
}