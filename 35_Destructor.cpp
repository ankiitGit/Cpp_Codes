// //Destructor in C++
// // A destructor is a type of function which is called when the object is destroyed. Destructor never takes an argument nor does it return any value

// #include<iostream>
// using namespace std;

// // Destructor never takes an argument nor does it return any value 
// int count=0;

// class num{
//     public:
//         num(){
//             count++;
//             cout<<"This is the time when constructor is called for object number"<<count<<endl;
//         }

//         ~num(){
//             cout<<"This is the time when my destructor is called for object number"<<count<<endl;
//             count--;
//         }
// };
// int main(){
//     cout<<"We are inside our main function"<<endl;
//     cout<<"Creating first object n1"<<endl;
//     num n1;
//     {
//         cout<<"Entering this block"<<endl;
//         cout<<"Creating two more objects"<<endl;
//         num n2, n3;
//         cout<<"Exiting this block"<<endl;
//     }
//     cout<<"Back to main"<<endl;
//     return 0;
// }

#include<iostream>
using namespace std ;
int count=0,prevcount=0;
class c{
    public:
    c(){
        count++,prevcount++;
        cout<<"entering into const for obect"<<count<<endl;
    }
    ~c(){
        cout<<"entering dest for object"<<prevcount<<endl;
        prevcount--;
    }
};
int main()
{
    c c1,c2;
    {
        c c3,c4;

        {
            c c5;
        }

        c c6;
    }
    c c7;

    return 0;
}