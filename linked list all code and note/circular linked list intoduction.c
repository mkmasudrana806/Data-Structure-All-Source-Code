#include<stdio.h>
#include<stdlib.h>
void display( );
void createCircularLinkedList( );
struct node
{
    int data;
    struct node *next;
};

struct node *head;
int main()
{


    createCircularLinkedList( );
    display( );

}


void display()
{
    struct node *temp;
    if(head==0)
    {
        printf("invalid linked list\n");
    }

    else
    {
        temp = head;

        while(temp->next!=head)
        {
            printf("%d ",temp->data);
            temp = temp->next;
        }
        printf("%d",temp->data);
    }

}


void createCircularLinkedList( )
{
    struct node *newnode,*temp;
    head=0;
    int choice=1;
    while(choice!=0)
    {
        newnode = (struct node*) malloc(sizeof(struct node));
        printf("enter node: ");
        scanf("%d",&newnode->data);
        newnode->next=0;
        if(head==0)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
// here i assign temp->next = head address.because akhon circular hoilo.mane sob node sobar sathe linked hoise.
        temp->next=head;
        printf("1 for yes and 0 for no\n");
        scanf("%d",&choice);
    }
}
