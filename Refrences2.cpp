//3. return type with and without &

// we cant do modification without using & while invoking of some fucntion


// // 1 --->no '&' while reciving and returning 
// #include<iostream>
// #include<string>
// using namespace std;
// int test(int a){
//    cout<<"test is called "<<endl;
//     a=a+2;
//     return a;
// }

// int main()
// {
//     int x=10;
//     test(x);
//     cout<<"after invoke without & , x is " <<x<<endl;

//     // test(x)+=5;  // cant do this 
//     cout<<"now x is " <<x<<endl;

//     return 0;
// }

// //2---> '&' while reciving and but no '&' while returning 
// #include<iostream>
// #include<string>
// using namespace std;
// int test(int & a){
//    cout<<"test is called "<<endl;
//     a=a+2;
//     return a;
// }

// int main()
// {
//     int x=10;
//     test(x);
//     cout<<"after invoke with & , x is " <<x<<endl;    //---> isme change ho gya 

//     // test(x)+=5;  // still we cant do this 
//     // as it is returning x(or a) only i.e. without any ' & ' so no modification is allowed

//     cout<<"now x is " <<x<<endl;

//     return 0;
// }


// 3---> '&' while doing both reciving and returning 
#include<iostream>
#include<string>
using namespace std;
int& test(int & a){
    cout<<"test is called "<<endl;
    a=a+2;
    return a;
}

int main()
{
    int x=10;
    test(x);
    cout<<"after invoke with & , x is " <<x<<endl;    //---> isme change ho gya 

    test(x)+=5;  // now we can do this 
    // as it is returning &x so further modification is allowed

    cout<<"now x is " <<x<<endl; 

    return 0;
}

// line 61 x becomes 12
// line 64 me jab test(x) vapas call hua 12 gaya and return hua 14 and then again +5 therefore final value is 12+2+5 = 19



























// #include<iostream>
// #include<string>
// using namespace std;
// int change1(int a){
//     a=a+2;
//     return a;            
// }

// int  change2(int & a){
//     a=a+2;
//     return a;            // what is use of this then // see line 107 and 109
// }


// int main()
// {
//     int x=10;
//     // int g=change1(x);     // as change is returning an int value jese hum krte haina cout<<change1(x);
//     // cout<<"g is "<<g<<endl;


//     // //   change1(x) += 4;  // error
    
//     // change2(x) += 4;      // no error and this is amazing 
//     cout<<"now x is "<<x<<endl;
//     cout<<change2(x)<<endl;     // ab change to 2 increament hokr hi aayega na 
     

//     // change2 ne return kia x par & ke sath

//     return 0;
// }