#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
}*head,*ptr,*newNode;

void createNode()
{
    int n,data; 
    cout<<"Enter the number of nodes\n";
    cin>>n;
    cout<<"Enter the data\n";
    for(int i=0;i<n;i++)
    {
        cin>>data;
        if(head==NULL)
        {
            head=(struct node *)malloc(sizeof(struct node));
            head->data=data;
            head->next=NULL;
            ptr=head;
        }
        else
        {
            newNode=(struct node*)malloc(sizeof(struct node));
            newNode->data=data;
            newNode->next=NULL;
            ptr->next=newNode;
            ptr=newNode;
        }
    }
}


void display()
{
    ptr=head;
    while(ptr!=NULL)
    {
        cout<<"Element : "<<ptr->data<<endl;
        ptr=ptr->next;
    }
}

struct node * deleteAtEnd(struct node *head)
{
    struct node *ptr=head;
    struct node *ptr1=ptr->next;
    while(ptr1 -> next !=NULL)
    {
        ptr=ptr->next;
        ptr1=ptr1->next;
    }
    ptr->next=NULL;
    free(ptr1);
    return head;
}
int main()
{
    createNode();
    head=deleteAtEnd(head);
    display();

}
