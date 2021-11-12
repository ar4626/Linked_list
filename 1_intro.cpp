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

    return 0;
}