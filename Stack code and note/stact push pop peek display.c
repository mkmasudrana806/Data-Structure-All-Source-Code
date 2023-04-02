//dynamic push pop until underflow and overflow.
#include<stdio.h>
int top=-1;
int a[10];
int main()
{
    int opt;
    do
    {
        printf("\n1.push\n2.pop\n3.display\n4.peek\n");
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
            display();
            break;
        case 4:
              peek( );
              break;
        default:
            printf("invalid option\n");
        }
    }
    while(opt!=0);
}



void peek( )
{
              printf("%d ",a[top]);
}
void push( )
{
    int choice=1,item;
    if(top>10)
    {
        printf("stack overflow condition: ");
    }
    else
    {
        while(choice!=0)
        {
            printf("enter element to push: ");
            scanf("%d",&item);
            top++;
            a[top]=item;
            printf("more?(1/0)");
            scanf("%d",&choice);
        }
    }
}
void pop()
{
    if(top==-1)
    {
        printf("stack underflow condition\n");
    }
    else
    {
        int choice=1;
        while(choice!=0)
        {
            top--;
            printf("more?(1/0)");
            scanf("%d",&choice);
        }
    }

}
void display()
{
    printf("stack is: ");
    for(int i=0; i<=top; i++)
        printf("%d ",a[i]);
}

