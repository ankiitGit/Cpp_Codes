//dot product of vectors
#include<iostream>
using namespace std;
class vectors{
    int a,b,c;
    
    public:
    void setvector(int x,int y,int z){
        a=x;
        b=y;
        c=z;
    }
    void print(){
        cout<<"the vector ; "<<a<<"i + "<<b<<"j + "<<c<<"k\n\n";
    }
    void dotpro(vectors x1,vectors y2){
        cout<<"-------------\n"<<"after dot product of above two vectros\n";
        a=x1.a*y2.a;
        b=x1.b*y2.b;
        c=x1.c*y2.c;
    }
};
int main()
{
    int r,s,t;
    vectors w1,w2,w3;
    cout<<"enter the i j and j direction of first vector respectively\n";
    cin>>r>>s>>t;
    w1.setvector(r,s,t);
    w1.print();

    cout<<"enter the i j and j direction of second vector respectively\n";
    cin>>r>>s>>t;
    w2.setvector(r,s,t);
    w2.print();

    w3.dotpro(w1,w2);
    w3.print();


    return 0;
}