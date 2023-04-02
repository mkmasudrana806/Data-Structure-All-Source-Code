#include<stdio.h>
void create( );
void reverse( );
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

struct node *head,*newnode,*prev,*next,*temp,*tail;
int main()
{
    create( );
    display( );
    reverse( );
    display( );
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



void reverse( )
{
    struct node *nextNode,*currentNode;
    currentNode = head;
    while(currentNode!=0)
    {
        nextNode = currentNode->next;
        currentNode->next = currentNode->prev;
        currentNode->prev = nextNode;
        currentNode = nextNode;
    }
    currentNode = head;
    head = tail;
    tail = currentNode;
}

//here i have created a linked list function.
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

