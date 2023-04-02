#include<stdio.h>
#include<stdlib.h>
void  createLinkedList( );
void  insertBegin( );
void  insertAtEnd( );
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

struct node*head,*tail,*temp;
int main()
{
    createLinkedList( );
    insertBegin( );
    insertAtEnd( );

}


//insert at end of the linked list
void   insertAtEnd( )
{
    struct node *newnode;
    newnode = (struct node*) malloc(sizeof(struct node));
    printf("enter to insert at end\n");
    scanf("%d",&newnode->data);
    newnode->prev =0;
    newnode->next = 0;


    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;

    //here we print the new linked list after insert a newnode in the start of the linked list.
    printf("\nafter insert end of the linked list: ");
    temp = head;
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
}


//insert at beginngin of the linked list
void  insertBegin( )
{
    struct node *newnode;
    newnode = (struct node*) malloc(sizeof(struct node));
    printf("\nenter to insert at begin\n");
    scanf("%d",&newnode->data);
    newnode->prev =0;
    newnode->next = 0;

    head->prev = newnode;
    newnode->next = head;
    head = newnode;
    //here we print the new linked list after insert a newnode in the start of the linked list.
    printf("\nafter insert at beginning the linked list are: ");
    temp = head;
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
}


//create a linked list
void  createLinkedList( )
{
    struct node *newnode;
    head=0;
    int choice=1;
    while(choice!=0)
    {
        newnode = (struct node*) malloc(sizeof(struct node));
        printf("enter node\n");
        scanf("%d",&newnode->data);
        newnode->prev = 0;
        newnode->next = 0;

        if(head==0)
        {
            head = tail = newnode;
        }
        else
        {
            tail->next=newnode;
            newnode->prev = tail;
            tail = newnode;
        }
        printf("1 for yes 0 for no\n");
        scanf("%d",&choice);
    }
//here we print the new linked list after insert a newnode in the start of the linked list.
    printf("\nthe linked list are: ");
    temp = head;
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
}
