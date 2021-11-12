#include<iostream>
#include<stdlib.h>
using namespace std;

struct node 
{
    int data;
    struct node *next;
};

void print(struct node *ptr)
{
    while(ptr!=NULL)
    {
        cout<<"Element : "<<ptr->data<<endl;
        ptr=ptr->next;
    }
}

//Function to insert a node at the first 
struct node*insertAtFirst(struct node *head,int data )
{
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    ptr->next=head;
    ptr->data=data;
    return ptr;

}

int main()
{
    struct node *head,*second,*third,*forth;

    //Allocation of memory for nodes in the linked list 
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    forth=(struct node*)malloc(sizeof(struct node));

    head->data=10;
    head->next=second;

    second->data=20;
    second->next=third;

    third->data=30;
    third->next=forth;

    forth->data=40;
    forth->next=NULL;

    print(head);                       //Printing the old Linked list
    cout<<"New Linked List"<<endl;
    head=insertAtFirst(head,55);
    print(head);                       //Printing the new Linked List
}