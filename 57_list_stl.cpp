#include<iostream>
#include<list>
using namespace std;
void display(list<int> L)
{
    list<int> :: iterator it;
    for ( it = L.begin(); it!=L.end(); it++)
    {
        cout<<*it<<" ";
    }
    
}
int main()
{
  list<int> list1; // list of 0 size    
  //list<int> list2(7); // empty list of 7 size

  list1.push_back(5);
  list1.push_back(7);
  list1.push_back(1);
  list1.push_back(9);
  list1.push_back(12);

    //   cout<<list1.end(); ye ni kr skte as ye alag data type hai vector jesa ni h ...
  list<int> ::iterator itr=list1.begin(); cout<<"displaying using seperate iterator \n";
 //   cout<<itr; iterator ek pointer jesa hota hai therefore use *
    cout<<*itr<<" ";
    itr++;
    cout<<*itr<<" ";
    itr++;
    cout<<*itr<<" ";
    itr++;
    cout<<*itr<<" ";
    itr++;
    cout<<*itr<<" ";
    itr++;

   cout<<"\ndisplaying using display func\n";
   display(list1);

   list1.pop_back();
   cout<<"\npoping out from back\n"; 
   display(list1);

   list1.pop_front();
   cout<<"\npoping out from front\n"; 
   display(list1);
   
   list1.push_front(14);
   cout<<"\npushing 14 from front\n"; 
   display(list1);
   
   list1.push_back(10);
   cout<<"\npushing 10 from back\n"; 
   display(list1);
   
   list1.sort();
   cout<<"\nusing sort function\n"; 
   display(list1);
   
   list1.reverse();
   cout<<"\nreversing the list\n"; 
   display(list1);
   
   // creating another list
   list<int> list2;
   list2.push_back(122);
   list2.push_back(2245);
   list2.push_back(968);
   list2.push_back(7852);
   cout<<"\ndisplaying list 2\n";
   display(list2);

   cout<<"\nmerging list 1 and list 2\n";
    list2.push_back(0);   
    list1.merge(list2);
    display(list1);
    cout<<endl; display(list2); cout<<endl;//-> ye run hi nhi krega kyunki list 2 merge ho gyi ab to list 1 me 
    display(list2); 

   list1.sort();
   cout<<endl; display(list1);

   
   
    return 0;
}

