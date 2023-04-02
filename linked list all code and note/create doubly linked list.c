#include<stdio.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

struct node *head,*newnode,*prev,*next,*temp;
int main()
{
    int ch;
    do
    {
        printf("enter choice\n1.create.\n2.display.\n3.length\n");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            create( );
            break;
        case 2:
            display( );
            break;
        case 3:
            length( );
            break;
        default:
            printf("invalid option\n");
        }
    }while(ch!=0);
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

void display( )
{
    temp = head;
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp = temp->next;
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
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            newnode->prev = temp;
            temp = temp->next;
        }
        printf("do you want to next node? (1/0)? ");
        scanf("%d",&choice);
    }
}
