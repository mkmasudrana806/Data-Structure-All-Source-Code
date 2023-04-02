/*
this is doubly linked list represent introduction
in singly linked list we only go on forward. but doubly linked list handle forward and backward work.
doubly linked list beshi memory lage,but singly kom lage each node.
doubly linked list has three part. previous pointer , data part, next pointer part.
*/
#include<stdio.h>

//we cann't declare any value in the node directly.
//it is just data type,data type cann't store any value ,it will give errors.
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head;
int main()
{
    createDoubly( );

}

void createDoubly()
{
    head =0;
    int choice=1;
    struct node *newnode,*temp;
    while(choice)
    {

        newnode = (struct node*) malloc(sizeof(struct node));
        printf("enter node\n");
        scanf("%d",&newnode->data);

        newnode->prev = 0;
        newnode->next = 0;

        if(head==0)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next=newnode;
            newnode->prev = temp;
            temp = newnode;
        }
        printf("1 for conitnue 0 for no\n");
        scanf("%d",&choice);
    }
//here temp and head both point to the linked list.
    printf("all node in linked list is: ");
    temp=head;
    while(temp!=0)
    {
        printf("node is: %d\n",temp->data);
        temp = temp->next;
    }
}
