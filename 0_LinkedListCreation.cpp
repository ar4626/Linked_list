#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

struct node *head,*ptr,*newNode;

void createNode(int n)
{
    newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=n;
    newNode->next=NULL;
    if(head==NULL)
    {
        head=newNode;
        ptr=head;
    }
    else
    {
        ptr->next=newNode;
        ptr=newNode;
    }
}
void print()
{
    struct node *ptr;
    ptr=head;
    while(ptr != NULL)
    {
     cout <<"Element : " <<ptr ->data << endl;
     ptr = ptr->next;
    }
}

int main()
{
    createNode(1);
    createNode(2);
    createNode(3);
    print();
}