// this is the program to inset a node at given position.
#include<stdio.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{
    int pos,count=0,i=1;
    struct node *newnode,*temp,*head;
    printf("enter the position want to add\n");
    scanf("%d",&pos);
    if(pos>count)
    {
        //traverse a node list you must declare temp variable.
        printf("invalid position\n");
        printf("that means node is not created\n");
    }
    else
    {
        temp=head;
        while(i<pos)
        {
            temp=temp->next;
            i++;
        }
        newnode=(struct node*) malloc(sizeof(struct node));
        //malloc is going to address of newly created node.it return void pointer.
        printf("enter data to inset at the end of the list\n");
        scanf("%d",&newnode->data);
        newnode->next=temp->next;
        temp->next=newnode;
    }
}
