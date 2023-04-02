
#include<stdio.h>
#include<stdlib.h>
void create( );
void size( );
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
        printf("\nEnter option to perform: \n1.create\n2.size of the linked list\n3.insert at any position\n");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            create();
            break;
        case 2:
            size( );
            break;
        default:
            printf("invalid option\n");
        }
    }
    while(ch!=0);
}

void size()
{
    temp = head;
    int count=0;
    while(temp!=0)
    {
         count++;
        temp = temp->next;
    }
    printf("size or length of the linked list is: %d \n",count);
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

