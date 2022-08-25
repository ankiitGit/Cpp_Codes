/*
useful files/classes;
1 fstreambase 
2 ifstream 
3 ofstream 

there are two ways to opwn files
1 using constructor
2 using the member func open() of the class

*/


#include<iostream>
#include<fstream>  
using namespace std;

int main()
{
    string st1= "ankit bhai sir ji";
    string st2;
    //opening files for thr constructor

    // 1_write

    ofstream out("44sample.txt"); // write operation
    out<<st1;

    // 2_read
    ifstream in ("44sample2.txt");
    // in>>st2;
    getline(in,st2);
    cout<<st2;

    return 0;
}
// ofstream ifstream classes ke objects h in and out respectively 
// to read --> ifstream in("name.txt"); string st; in>>st;
// to write -> ofstream out("name.txt"); string st2; out<<st2;
