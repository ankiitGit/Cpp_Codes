// 1 string to interger ...i.e. stoi 

// #include<iostream>
// #include<string>
// //#include<math.h>
// using namespace std;
// int main ()
// {
//     string s="100";
//     int x;
//     x=stoi(s);
//     cout<<x+1; // ab s ko humne ek integer bana kr x me store kr lia h 
//     cout<<endl;
//     return 0 ;
// }

// 2 integer to string 

// #include<iostream>
// #include<string>
// //#include<math.h>
// using namespace std;
// int main ()
// {
//     int x=100;
//     string s= to_string(x);  //ab ye x string me convert to gya h 
//     cout<<s<<endl;
//     s=s+"ankit";
//     cout<<s<<endl;
//     cout<<"lenth will become : "<<s.length();
//     return 0 ;
// }

// 3 sorting 

// #include<iostream>
// #include<algorithm>
// #include<string>
// // #include<math.h>
// using namespace std;
// int main ()
// {
//     // string s= "654516846";
//     string s= "hurehohadjcxoifi";
//     sort(s.begin(), s.end());   //begin and end are function to knoe begning and ending of string and sort is used to sort 
//     cout<<s;
//     return 0 ;
// }

// 4 lowercase and uppercase 

// #include<iostream>
// #include<string>
// // #include<math.h>
// using namespace std;
// int main ()
// {
//     string s= "ajbdbiuoauhcoorud";
//     cout<<"originally ----------> "<<s<<endl;
//     for (int i = 0; i < s.length(); i++)
//     {
//         s[i]-=32; //s[i]=s[i]-32;
//     }
//     cout<<"to uppercase----------> "<<s<<endl;
//     for (int i = 0; i < s.length(); i++)
//     {
//         s[i]+=32; //s[i]=s[i]-32;
//     }
//     cout<<"to lowercase----------> "<<s<<endl;

//     return 0 ;
// }


// 5 descending order 

// #include<iostream>
// #include<string>
// #include<math.h>
// using namespace std;
// int main ()
// {
//     string s= "abcdjek";
//     // string s= "561551427858847722339999145";
//     for(int j=0;j<s.length();j++)
//     {
//       for (int i = 0; i < s.length(); i++)
//       {
//           if (s[i]<s[i+1])
//           {
//               char temp=s[i];
//               s[i]=s[i+1];
//               s[i+1]=temp;   
//           }
          
//       }
//     }
//     cout<<s;
//     return 0 ;
// }


#include<iostream>
#include<string>
#include<math.h>
using namespace std;
int main ()
{
    int counter=0,steady=0;
    // string s= "abcdjek";
    string s= "56155142785884772233999910000000000000045";
    for (int i = 0; i < s.length(); i++)
    {
        for (int j = 0; j < s.length(); i++)
        {
            
        }
        
    }
    
      
    return 0 ;
}

if (counter>steady)
      {
          steady=counter;
      }
      
      counter=0;
    }
    cout<<steady;