#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;
};
void traverse(node* n){ 
    // node*temp=new node(); ye bhi shi h 
    node*temp; // ye bhi shi h
    temp=n;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
void insertAtStart(node* &n,int newValue){
    node* newNode=new node();
    newNode->data=newValue;
    newNode->next=n; // n is head ultimately or head mtlb first .......yahan n.next krne ka koi sense ni h kyunki n actualy me heaad jo actually me first h or head ka koi next ya data wal scene ni h vo to bs ek ptr h
    n=newNode;       // dekh yaha pr n me chnage krre hai islie head ka adress(&head) liya..........int a=6; ye hai isko kisi function ne sirf by value call krenge toh a me change nhi hoga na.......yaahan to change krne ke lie &a bhejna pdega
                    // upr wale function me islie ni kiya kyunki vaya pr int c=a hora h...a me ni hora kuch
};
void insertAtPosition(node* &n,int newValue,int index){
    node*temp=n;         //we dont want to lose our head so we stored its value then moving
    node * newNode=new node();
        int p=0;
        while (p<index-1)
        {
            temp=temp->next;
            p++;
        }
        newNode->next=temp->next;
        temp->next=newNode;
        newNode->data=newValue;       
}
void insertAtLast(node* n,int newValue){
   node*temp=n;
   while (temp->next!=NULL)
   {
       temp=temp->next;
   }
    node * newNode=new node();
    newNode->next=NULL;
    temp->next=newNode;
    newNode->data=newValue;
      
}
void delAtBeg(node*&n){
    n=n->next;   
}

void delEle(node*&n,int element){
    node*temp=n;
    node*temp1=n;
    node*temp2=n;
    int index=0;
    bool flag=0;
    while (temp!=NULL)
    {
        if (temp->data==element)
        {
           flag=1;
           break;
        }   

        temp=temp->next;
    }
 
    if(flag==1){
    while (temp1->data!=element) /*what if koi element ke equal hua hi ni islie humne bool wala kaam kia h phle dekha ki element hoga tbhi esa krege vrna nhi*/
    {
        temp1=temp1->next;
        index++;
    }
    int p=0;
    while (p<index-1)
    {
        temp2=temp2->next;
        p++;
    }
    temp2->next=temp1->next;
    traverse(n);
    cout<<endl;
    }
    else
    {
        cout<<"element not found\n";
    } 
}
void deleteLast(node* &n){
    node*temp=n;
    node*temp1=n;
    int p=0;
    int index=0;
    while (temp->next!=NULL)
    {
        temp=temp->next;
        index++;
    }
    while (p<index-1)
    {
        temp1=temp1->next;
        p++;
    }
    temp1->next=NULL;

}
int main()
{
    node*first=new node();        
    node*second=new node();
    node*third=new node();
     
    node*head=first;  

    first->data=7;
    first->next=second;

    second->data=65;
    second->next=third;

    third->data=3;
    third->next=NULL;

    traverse(head);
    cout<<endl;
    //  cout<<head->data;
    insertAtStart(head,12);
    traverse(head);
    cout<<endl;
    insertAtStart(head,14);
    traverse(head);
    cout<<endl;
    insertAtPosition(head,23,3);
    traverse(head);
    cout<<endl;
    insertAtPosition(head,18,4);
    traverse(head);
    cout<<endl;
    insertAtLast(head,90);
    traverse(head);
    cout<<endl;
    insertAtLast(head,5);
    traverse(head);
    cout<<endl;

    delAtBeg(head);
    traverse(head);
    cout<<endl;
    delEle(head,3);
    delEle(head,90);
    // traverse(head);
    deleteLast(head);
    traverse(head);
    return 0;
}
