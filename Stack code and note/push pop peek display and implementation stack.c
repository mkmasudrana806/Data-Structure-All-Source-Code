#include<stdio.h>
#define N 5
int stack[N];
int top=-1;
int main()
{
    int choice;
    do
    {
        printf("\n1.push\n2.pop\n3.peek/top data\n4.display\n0.Exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            push( );
            break;
        case 2:
            pop( );
            break;
        case 3:
            peek( );
            break;
        case 4:
            traverse( );
            break;
        default:
            printf("enter valid option\n");
        }
    }
    while(choice!=0);
}


void push()
{
    if(top==N-1)
    {
        printf("overflow condition \n");
        //isFull();
    }
    else
    {
        int data;
        printf("enter data to insert: ");
        scanf("%d",&data);
        top++;
        stack[top]=data;
    }
}

void pop()
{
    if(top==-1)
    {
        printf("underflow condition \n");
        //isEmpty();
    }
    else
    {
        printf("pop item is : %d\n",stack[top]);
        top--;
    }
}


void peek()
{
    if(top==-1)
        printf("stack is empty\n");
    else
        printf("top of the data is : %d\n",stack[top]);
}

void traverse()
{
    int i;
    for(i=top; i>=0; i--)
        printf("%d ",stack[i]);
}
