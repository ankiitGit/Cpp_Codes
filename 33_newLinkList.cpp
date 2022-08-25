//struct banana ya class banalo
//class me hume har fucntion andr declarna krna pdega 
// struct is better kyunki publcly hi use kran chahre h 

// imp thing is hum ek dataype banare hai jop do chije store krne wala hai ek hai data and second hai uski link (link jo next node ko point krri hogi jiske andr vpas do chiej hongi)
// to ab ye saaf dikhra hai ki jo hm datatype banare hai usi ki link/adress store krna chahre hai hum

// or isilie hum struct_name* ka use krte hai link list me

#include<iostream>
using namespace std;
struct node{
  int data;
  node *next;
};
int main()
{
    // node*head=new node();
    // node*head=new node();
    // node*head=new node();
    // node*head=new node();
   
    node*head=new node();
    int n;cout<<"enter the size of link list you want to create \n";cin>>n;
    for (int i = 1; i <=n; i++)
    {
      node*temp=new node();
      cout<<"enter the element " <<i<<" : ";
      cin>>temp->data;
      temp->next=NULL;
      
    }
    
    
    return 0;
}