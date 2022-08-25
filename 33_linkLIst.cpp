#include <iostream>
using namespace std;
class node
{
public:
    int value;
    node *link;
};

void print(node *n)
{

    while (n->link != NULL)
    {
        n = n->link;
        cout << n->value << " ";
    }
}


int main()
{
    

    node *ptr = new node(); //ye strating pointer h jo head ka address yani link store krra h
    node *head = new node();
    node *second = new node();
    node *third = new node();

    ptr->link = head;

    head->value=5;
    head->link = second;

    second->value = 51;
    second->link = third;

    third->value = 45;
    third->link = NULL;

    print(ptr);
    return 0;
}