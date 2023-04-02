#include<stdio.h>
#include<stdlib.h>
void create( );
struct node
{
    int data;
    struct node *next;
};
struct node *head=0,*newnode,*temp;
int main()
{
    int choice;
    printf("1.create\n2.inset at begin\n3.at end\n4.at any position\n");
    scanf("%d",&choice);
    if(choice==1)
        create( );
    else if (choice==2)
    insertBegin();
    else if(choice==3)
    insertEnd( );
    else
                  display();*/


}


void insertBegin()
{
              printf("")
}

void create()
{
    head = NULL;
    int choice=1;
    while(choice!=0)
    {
        newnode = (struct node*) malloc(sizeof(struct node));
        printf("enter data to node: ");
        scanf("%d",&newnode->data);
        newnode->next=0;
        if(head==0)
        {
            head  = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;

        }
        printf("more to add?(1/0) ");
        scanf("%d",&choice);
    }
    temp = head;
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
}
