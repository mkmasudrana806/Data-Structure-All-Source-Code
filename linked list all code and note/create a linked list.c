#include<stdio.h>
#include<stdlib.h>
void create( );
void display_count( );
struct node
{
    int data;
    struct node *next;
};

struct node *head, *newnode, *temp;
int main()
{
    create();
    display_count();
}

void display_count()
{
    int count=0;
    temp = head;
    while(temp!=0)
    {
        printf("node is : %d\n",temp->data);
        temp = temp->next;
        count++;
    }
    printf("number of node is : %d\n",count);
}

void create()
{
//here we declare *head,*newnode,*tmep as global.
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
