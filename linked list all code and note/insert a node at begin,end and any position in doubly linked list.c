//insert a node at begin,end and any position,we maintain tail pointer,so no need to temp pointer.
//since tail pointer point last of the node in a linked list.so we can perfom.

#include<stdio.h>
#include<stdlib.h>
void create( );
void insertAtBegin( );
void insertAtEnd( );
void insertAnyPosition( );
void display( );
void length( );
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

struct node *head,*newnode,*prev,*next,*temp,*tail;
int main()
{
    int ch;
    do
    {
        printf("\nEnter choice\n1.create.\n2.insert at begin.\n3.insert at end.\n4.insert any position\n5.display.\n6.length\n");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            create( );
            break;
        case 2:
            insertAtBegin( );
            break;
        case 3:
            insertAtEnd( );
            break;
        case 4:
            insertAnyPosition( );
            break;
        case 5:
            display( );
            break;
        case 6:
            length( );
            break;
        default:
            printf("invalid option\n");
        }
    }
    while(ch!=0);
}


void display( )
{
    temp = head;
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
}
void length( )
{
    int length=0;
    temp = head;
    while(temp!=0)
    {
        temp = temp->next;
        length++;
    }
    printf("number of node or length of the linked list is: %d \n",length);

}


//time complexity is order of O(1) or constant time.
void insertAtEnd( )
{
    newnode = (struct node*) malloc(sizeof(struct node));
    printf("enter data to insert: ");
    scanf("%d",&newnode->data);
    newnode->next = 0;
    newnode->prev = tail;
    tail->next = newnode;
    tail = newnode;
}

//time complexity:order of O(n)
void insertAnyPosition( )
{
    int pos;
    printf("enter positon: ");
    scanf("%d",&pos);
    if(pos<1)
    {
        printf("invalid position \n");
    }
    else if(pos==1)
    {
        insertAtBegin();
    }
    else
    {
        newnode = (struct node*) malloc(sizeof(struct node));
        printf("enter data to insert: ");
        scanf("%d",&newnode->data);
        temp = head;
        int i=1;
        while(i<pos-1)
        {
            temp = temp->next;
            i++;
        }
        newnode->prev = temp;
        newnode->next = temp->next;
        temp->next = newnode;
        newnode->next->prev = newnode;
    }
}


//time complexity: order of O(1) or constant time.
void insertAtBegin( )
{
    newnode = (struct node*) malloc(sizeof(struct node));
    printf("enter data to insert: ");
    scanf("%d",&newnode->data);
    newnode->prev = 0;
    newnode->next = head;
    head = newnode;
}

void create( )
{
//head,prev,next,temp,newnode pointer declared in global section.
    head=0;
    int choice=1;
    while(choice!=0)
    {
        newnode = (struct node*) malloc(sizeof(struct node));
        printf("enter data for node: ");
        scanf("%d",&newnode->data);
        newnode->prev = 0;
        newnode->next = 0;
        if(head==0)
        {
            head = tail = newnode;
        }
        else
        {
            tail->next = newnode;
            newnode->prev = tail;
            tail = newnode;
        }
        printf("do you want to next node? (1/0)? ");
        scanf("%d",&choice);
    }
}

