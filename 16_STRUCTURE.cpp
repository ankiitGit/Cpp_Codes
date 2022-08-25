#include<iostream>
#include<iomanip>
using namespace std;
int b=1;

struct family
{   string names;
    int familyid;
    char adress;
    int members;
    float totalsalary;

};

void familyInfo( family name)
{
   
   cout<<endl;
   cout<<"the name of family of "<<b<<" is "<<  setw(10) <<name.names<<endl;
   cout<<"the familyId of "<<b<<" is "<<  setw(10) <<name.familyid<<endl;
   cout<<"the adress of "<<b<<" is "<<  setw(10) <<name.adress<<endl;
   cout<<"the members of "<<b<<" is "<<  setw(10) <<name.members<<endl;
   cout<<"the totalSAlary of "<<b<<" is "<<  setw(10) <<name.totalsalary<<endl;
   cout<<"_____________________________________________________"<<endl;
   b++;

}

int main()
{
    struct family ankit;
        ankit.names= "ankit's Family";
        ankit.familyid=1025;
        ankit.adress='k';
        ankit.members=5;
        ankit.totalsalary=456256;

     family ramesh;                        //struct hta bhi do to koi dikkt nhi h
        ramesh.names= "ramesh's Family";
        ramesh.familyid=1547;
        ramesh.adress= 'c';
        ramesh.members;
        ramesh.totalsalary=596985;

  familyInfo(ankit);
  familyInfo(ramesh);


  return 0;
}