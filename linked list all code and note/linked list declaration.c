#include<stdio.h>
#include<stdlib.h>

// here i have create a data linked list data type.
struct node
{
    int data;
    struct node *next;
};
int main()
{
    struct node *head,*newnode,*temp,*next;
    head =0;
    int n;
    printf("how number want to add\n");
    scanf("%d",&n);
    int i=1;
    while(i<=n)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        if(head==0)
        {
            head = temp=newnode;
           scanf("%d",&head->data);
        }

        printf("enter node\n");
        scanf("%d",&temp->data);
        temp->next=newnode;
        temp=newnode;
        i++;
    }
    temp->next=0;
printnode(head);

}

void printnode(struct node *ptr)
{
    while( ptr!= NULL)
    {
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }
}
