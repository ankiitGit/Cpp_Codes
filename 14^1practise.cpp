//hume pointers of arays ka hi loop bana diya hai

#include<iostream>
using namespace std;
int main()
{
  
  int i=0;
  int marks [] = {23,45,12,89,12,34,34,22,66,56};
  int *s= marks;
  do                                                      
  {
    cout<<" the vakue of student "<<i<<" are : "<<*(s+i)<<endl;   //dekh *s tovhi value of value aa jati hai
    i++;
  } while (i<9);

  

  
  return 0;
}