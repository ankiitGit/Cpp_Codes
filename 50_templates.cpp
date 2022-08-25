#include<iostream>
#include<string>
using namespace std;
template<class T>
class sample{
public:
    T a;
    T b;
    void check(T c){
        if (c==a+b)
        {
            cout<<"fine\n";
        }
        else
        {
            cout<<"not fine\n";
        }
        
    }

};
int main()
{
    sample<int> s;
    s.a=20;
    s.b=10;
    s.check(30);
    s.check(35);

    sample<float> s2;
    s2.a=1.8;
    s2.b=2.2;
    s2.check(4.0);

    sample<string> s3;
    s3.a="an4";
    s3.b="k it";
    s3.check("an4k it");
    
    

    return 0;
}