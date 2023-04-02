#include<stdio.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{
    struct node *head,*newnode, *next, *temp;
    head = 0;
    newnode = (struct node*)malloc(sizeof(struct node));
    if(head==0)
    {
        head = newnode;
    }
    else
    {
            temp->next=newnode;
            temp=newnode;

    }
}
