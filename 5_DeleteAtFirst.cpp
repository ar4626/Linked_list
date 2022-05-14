#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
} * head, *ptr, *newNode;

void createNode()
{
    int n,data;
    cout << "Enter the number of nodes \n";
    cin >> n;
    cout<<"Enter the value\n";
    for (int i = 0; i < n; i++)
    {
        cin>>data;
        if (head == NULL)
        {
            head = (struct node *)malloc(sizeof(struct node));
            head->data = data;
            head->next = NULL;
            ptr = head;
        }
        else
        {
            newNode = (struct node *)malloc(sizeof(struct node));
            newNode->data = data;
            newNode->next = NULL;
            ptr->next = newNode;
            ptr = newNode;
        }
    }
}

void deleteAtFirst()
{
    ptr = head;
    head = head->next;
    free(ptr);
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
int main()
{
    createNode();
    display();
    deleteAtFirst();
    display();
}