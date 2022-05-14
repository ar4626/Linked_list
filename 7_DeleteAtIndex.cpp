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

void deleteAtIndex(){
	int index;
	cout<<"Enter index to delete:  ";
	cin>>index;
	int i =0;
	ptr = head;
	struct node *p = ptr -> next;
	while(i != index -1 ){
		ptr = ptr -> next;
		p = p -> next;
		i++;
	}
	ptr -> next = p -> next;
	
	
}
int main()
{
    createNode();
    //display();
    deleteAtIndex();
    display();

}

