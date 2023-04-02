
#include<stdio.h>
#include<stdlib.h>
void create( );
void display( );
void insertAtBegin( );
void insertAtAnyPosition( );
struct node
{
    int data;
    struct node *next;
};

struct node *head, *newnode, *temp;
int main()
{
    int ch;
    do
    {
        printf("\nEnter option to perform: \n1.create\n2.display\n3.insert at any position\n");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            create();
            break;
        case 2:
            display( );
            break;
        case 3:
            insertAtAnyPosition( );
            break;
        default:
            printf("invalid option\n");
        }
    }
    while(ch!=0);
}

void insertAtAnyPosition( )
{
    system("cls");
    int pos;
    printf("Enter position to insert: ");
    scanf("%d",&pos);
    newnode= (struct node*)malloc(sizeof(struct node));
    printf("enter data to insert: ");
    scanf("%d",&newnode->data);

    if(pos==0)
        insertAtBegin(newnode->data);
            else if(pos<0)
    {
        printf("invalid position \n");
    }
    else
    {
        int i=1;
        temp = head;
        while(i<pos)
        {
            temp = temp->next;
            i++;
        }
        newnode->next=temp->next;
        temp->next=newnode;
    }
}


//insert at begin.
void insertAtBegin( int value)
{
    int choice=1;
    while(choice!=0)
    {
        newnode = (struct node*) malloc(sizeof(struct node));
        newnode->data=value;
        newnode->next=head;
        head=newnode;
        printf("add more? (1/0)? ");
        scanf("%d",&choice);
    }
}

//to display the linked list i create a function .
void display()
{
    temp = head;
    printf("Linked list are : ");
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
}

//create a linked list
void create()
{
    head=0;
    int choice=1;
    while(choice!=0)
    {
        newnode = (struct node*) malloc(sizeof(struct node));
        printf("enter data for node: ");
        scanf("%d",&newnode->data);
        newnode->next=0;
        if(head==0)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next=newnode;
            temp = newnode;
        }
        printf("another node create? (0/1)?");
        scanf("%d",&choice);
    }
}



