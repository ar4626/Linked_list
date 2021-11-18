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
    
    if(head==NULL)
    {
        head=(struct node*)malloc(sizeof(struct node));
        head->data=n;
        head->next=NULL;
        ptr=head;
    }
    else
    {
        newNode=(struct node*)malloc(sizeof(struct node));
        newNode->data=n;
        newNode->next=NULL;
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