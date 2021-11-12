#include <iostream>
#include <stdlib.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};
void linkedlist_transversal(struct Node *ptr)
{
    while(ptr != NULL)
    {
     cout <<"Element : " <<ptr ->data << endl;
     ptr = ptr->next;
    }
}

struct Node *insertAtFirst(struct Node *head,int data)
{
    struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
    ptr->next=head;
    ptr->data=data;
    return ptr;
}

struct Node *insertAtIndex(struct Node *head,int data,int index)
{
    struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
    ptr->data=data;
   
    struct Node *p=head;
    int i=0;

    while(i!=index-1)
    {
        p=p->next;
        i++;
    }
    ptr->next=p->next;
    p->next=ptr;
    return head;

}

struct Node *insertAtEnd(struct Node *head,int data)
{
    struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
    ptr->data=data;
    struct Node *p=head;

    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
    return head;

}

int main()
{
    struct Node *head,*second,*third,*forth;

    //Allocate memory for nodes in the linked list

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    forth = (struct Node*)malloc(sizeof(struct Node));

    //Link first to second Node
    head->data = 1;
    head->next = second;

    //Link second to third Node
    second->data = 2;
    second->next = third;

    //Link third to forth node
    third->data = 3;
    third->next = forth;

    //Terminate the list at the forth list 
    forth->data=4;
    forth->next=NULL;

    linkedlist_transversal(head);
    // insertAtFirst(head,56);
    //insertAtIndex(head,22,2);
    //insertAtEnd(head,22);
    head=insertAtEnd(head,9);
    linkedlist_transversal(head);
}