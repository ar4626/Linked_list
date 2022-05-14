#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head;
void CreateNode(int n);
void Display();
void InsertFirst(int firstdata);

int main()
{
    printf("Enter the number of nodes : ");
    int n;
    scanf("%d",&n);
    CreateNode(n);
    Display();
    printf("Enter the data you want to add at the beginning : ");
    int firstdata;
    scanf("%d",&firstdata);
    void InsertFirst(firstdata);
    printf("The new LL = ");
    Display();
    return 0;
}
void CreateNode(int n)
{
    struct node *newnode,*temp;
    head=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data of Node 1 : ");
    scanf("%d",&head->data);
    head->next=NULL;
    temp=head;
    for(int i=2;i<=n;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the data of %d : ",i);
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        temp->next=newnode;
        temp=newnode;
    }
}
void Display()
{
    struct node *temp;
    temp=head;
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
}
void InsertFirst(int firstdata)
{
    struct node *newnode,*temp;
    newnode->data=firstdata;
    newnode->next=head;
    
}
