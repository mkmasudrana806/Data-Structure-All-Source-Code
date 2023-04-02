#include<stdio.h>
#include<stdlib.h>
void create();
void display( );
void deleteAtBegin( );
void deleteAtEnd( );
void deleteAnyPosition( );
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
        printf("\nEnter choice\n1.create.\n2.display.\n3.delete at begin.\n4.delete any position\n5.delete any position\n");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            create( );
            break;
        case 2:
            display();
            break;
        case 3:
            deleteAtBegin();
            break;
        case 4:
            deleteAnyPosition( );
            break;
        case 5:
              deleteAtEnd();
              break;
        default:
            printf("invalid option\n");
        }
    }
    while(ch!=0);
}

void deleteAnyPosition()
{
    int pos,i=1;
    printf("enter position\n");
    scanf("%d",&pos);
    if(pos==1)
        deleteAtBegin( );
    else
    {
        temp = head;
        while(i<pos)
        {
            temp = temp->next;
            i++;
        }

        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        free(temp);
    }
}


//time complexity: order of O(1).
void deleteAtEnd( )
{
    temp = head;
    if(tail==0)
        printf(" list is empty\n");
    else
    {
        temp = tail;
        tail->prev->next = 0;
        tail = tail->prev;
        free(temp);
    }
}

void deleteAtBegin()
{
    if(head==0)
        printf("list is empty and there is no node in linked list:\n");
    else
    {
        temp = head;
        head = head->next;
        head->prev = 0;
        free(temp);
    }
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


void display( )
{
    temp = head;
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
}
