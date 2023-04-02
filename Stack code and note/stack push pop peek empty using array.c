#include<stdio.h>
#define N 5

int stack[N];
int top = -1;
int main()
{

    int opt;


    do
    {
        printf("\n1.push\n2.pop\n3.peek\n4.display\n");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            push( );
            break;
        case 2:
            pop( );
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        default:
            printf("invalid option\n");
        }
    }
    while(opt!=0);
}


void display()
{
    int i;
    for(i=top; i>=0; i--)
        printf("%d ",stack[i]);
}

void peek()
{
    if(top==-1)
        printf("stack is empty\n");
    else
        printf("top most value is : %d",stack[top]);
}

void pop()
{
    int item;
    if(top==-1)
    {
        printf("underflow conditoin \n");
    }
    else
    {
        item = stack[top];
        top--;
        printf("deleted item is : %d\n",item);
    }
}

void push()
{
    int item;
    printf("enter data\n");
    scanf("%d",&item);
    if(top==N-1)
    {
        printf("overflow condition \n");
    }
    else
    {
        top++;
        stack[top] = item;
    }
}
