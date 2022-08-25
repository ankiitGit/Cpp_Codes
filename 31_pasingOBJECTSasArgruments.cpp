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
        cout<<"the vector ; "<<a<<"i + "<<b<<"j + "<<c<<"k\n";
    }
    void dotpro(vectors x1,vectors y2){     // yahan ye object ko as a argument lia h
        cout<<"-------------\n"<<"after dot product of above two vectros\n"<<"-------------\n";
        a=x1.a*y2.a;
        b=x1.b*y2.b;
        c=x1.c*y2.c;
    }
};

int main()
{
    vectors w1,w2,w3;
    w1.setvector(2,5,7);
    w1.print();

    w2.setvector(3,4,10);
    w2.print();

    w3.dotpro(w1,w2);
    w3.print();


    return 0;
}