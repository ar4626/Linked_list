#include<iostream>
using namespace std;

struct node
{
    int data;
    int power;
    struct node *next;
}*head,*ptr,*newnode;

void  create()
{
    if(head==NULL)
    {
        head=(struct node *)malloc(sizeof(struct node));
        head->data=10;
        head->next=NULL;
        ptr=head;
    }
    else
    {
        newnode=(struct node *)malloc(sizeof(node));
        newnode->data=10;
        newnode->next=NULL;
        ptr=newnode;
    }
}

