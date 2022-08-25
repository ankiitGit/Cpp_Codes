// private member jese treat bhi krna hai or inheritable bhi rkhna hai to make them protected

#include<iostream>
#include<string>
using namespace std;
class student {
   protected:
   int roll_number;

   public:

    void set_roll_number(int r ){
        roll_number=r;
    }

    void get_roll_number(){
        cout<<"roll number is : "<<roll_number<<endl;
    }
};

class exam: public student  {
   protected:
   float physics;
   float maths;

   public:

   void setmarks(float p,float m){
       physics=p;
       maths=m;
   }

   void getmarks(){
       cout<<"marks of maths are : "<< maths<<endl;
       cout<<"marks of physics are : "<< physics<<endl;
   }

};

class result : public exam{
    float percentage;
    public:
    void display()
    {
      cout<<"roll number is "<<roll_number<<endl;
      cout<<"result is : "<<(maths+physics)/2<<endl;
    }


};
int main()
{
    student ankit;
    // ankit.roll_number;    // tis will show error becuse roll number is inhertibale yet private

    result mama;
    mama.set_roll_number(1);
    mama.setmarks(95,97);
    mama.getmarks();
    mama.display();

    return 0;
}