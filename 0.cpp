#include <iostream>
#include <stdlib.h>
using namespace std;
struct Node
{
    int data;
    struct Node *link;
};
struct Node *head,*newNode,*ptr;

void addNode(int value)
{
    newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=value;
    newNode->link=NULL;

    if(head=NULL)
    {
        head=newNode;
        newNode=ptr;
    }
    else
    {
       // head->link=newNode;
        ptr->link=newNode;
        ptr=newNode;
    }
}
void print() 
{  
    struct Node *ptr=head;  
    if(head==NULL) 
        cout<<"List is empty";  
      
    cout<<"Nodes are:";  
    while(ptr!=NULL) 
    {  
        cout<<ptr->data<<endl;  
        ptr=ptr->link;  
    }
}
// void print(struct Node *ptr)
// {
//     while(ptr != NULL)
//     {
//         cout << "Element : " << ptr->data << endl;
//         ptr=ptr->link;
//     }
// }

int main()
{
    addNode(1);
    addNode(2);
    addNode(3);

    print();

    return 0;
}
