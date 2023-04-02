#include<stdio.h>
#define N 5

struct node
{
    int data;
    struct node *next;
};
struct node *newnode,*temp,*top=0;

int main()
{
    int choice;
    do
    {
        printf("\n1.push\n2.pop\n3.traverse\n4.pop\n0.Exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            push( );
            break;
        case 2:
            peek( );
            break;

            break;
        case 3:
            traverse( );
            break;
        case 4:
            pop( );
            break;
        default:
            printf("enter valid option\n");
        }
    }
    while(choice!=0);
}


void pop()
{
    if(top==0)
        printf("underflow condition \n");
    else
    {
        temp = top;
        printf("pop data is: %d\n",top->data);
        top=top->next;
        free(temp);
    }
}

void push()
{
    struct node *newnode;
    newnode = (struct node*) malloc(sizeof(struct node));
    printf("enter data to push: ");
    scanf("%d",&newnode->data);
    newnode->next = top;
    top = newnode;
}

void peek()
{
    if(top==0)
    {
        printf("stack is empty\n");
        //isEmpty();
    }
    else
    {
        printf("top element is : %d\n",top->data);
    }
}

void traverse()
{
    temp = top;
    if(top==0)
        printf("list is empty\n");
    else
    {
        while(temp!=0)
        {
            printf("%d ",temp->data);

            temp = temp->next;
        }
    }
}

