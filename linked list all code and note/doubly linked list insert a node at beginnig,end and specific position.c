/*
we need a tail pointer.tail bollam karon ekdom linked list er ses er address point korbo.
if we maintain tail then time complexity is O(1) for both insert and delete.
but if cann't maintain tail pointer then time coplexity is O(n).
*/
/*
this is doubly linked list represent introduction
in singly linked list we only go on forward. but doubly linked list handle forward and backward work.
doubly linked list beshi memory lage,but singly kom lage each node.
doubly linked list has three part. previous pointer , data part, next pointer part.

tmie complexity doubly in insert.at beginning and end time is O(1). and at any specific position takes O(n)
*/
#include<stdio.h>
#include<stdlib.h>
void  createLinkedList( );
void  insertBegin( );
void  insertAtEnd( );
void  insertSpecificPosition( );
void insertAfterPosition( );

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
//here we take tail pointer only for insert end of the linked list,when we create linked list tail pointer move with newnode.
struct node*head,*tail,*temp;
int count=0;
int main()
{
    createLinkedList( );
    insertBegin( );
    insertAtEnd( );
    insertSpecificPosition( );
    insertAfterPosition( );

}

void  insertAfterPosition( )
{
    int pos;
    printf("\nenter the position want to insert\n");
    scanf("%d",&pos);
    if(pos<1 || pos>count)
    {
        printf("\ninvalid position,either outof likedlist or less newlinked\n");
    }

    else
    {
        struct node *newnode;
        newnode = (struct node*) malloc(sizeof(struct node));
        printf("\nenter data to insert after a  specific position\n");
        scanf("%d",&newnode->data);
        int i=1;
        temp = head; //now temp point to the linked list.we traverse only temp pionter not head pointer.
        while(i<pos)
        {
            temp = temp->next;
            i++;
        }
        newnode->prev=temp;
        newnode->next = temp->next;
        temp->next = newnode;
        newnode->next->prev = newnode;
    }
    printf("\nafter insert a node a specific position of the linked list: ");
    temp = head;
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
}

void  insertSpecificPosition( )
{
    int pos;
    printf("\nenter the position want to insert\n");
    scanf("%d",&pos);
    if(pos<1 || pos>count)
    {
        printf("\ninvalid position,either outof likedlist or less newlinked\n");
    }
    else if(pos==1)
    {
        insertBegin( );
    }

    else
    {
        struct node *newnode;
        newnode = (struct node*) malloc(sizeof(struct node));
        printf("\nenter data to insert a specific position\n");
        scanf("%d",&newnode->data);
        int i=1;
        temp = head; //now temp point to the linked list.we traverse only temp pionter not head pointer.
        while(i<pos-1)
        {
            temp = temp->next;
            i++;
        }
        newnode->prev=temp;
        newnode->next = temp->next;
        temp->next = newnode;
        newnode->next->prev = newnode;
    }
    printf("\nafter insert a specific position of the linked list: ");
    temp = head;
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
}

void   insertAtEnd( )
{
    struct node *newnode;
    newnode = (struct node*) malloc(sizeof(struct node));
    printf("\nenter to insert at end\n");
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
        count++;
        temp = temp->next;
    }
    printf("\nthe length of the linked list is: %d\n",count);
}
