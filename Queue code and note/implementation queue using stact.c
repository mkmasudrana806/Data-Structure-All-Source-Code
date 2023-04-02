#include<stdio.h>
#define N 5
int S1[N],S2[N];
int top1=-1,top2=-1;
int count=0;


void enqueue(int );
void dequeue( );
void push1(int );
void push2(int );
int pop1( );
int pop2( );
void display( );
int main( )
{
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    dequeue();
    display();

}

void display()
{
    int i;
    for(i=0; i<=top1 ; i++)
    {
        printf("%d ",S1[i]);
    }
}

int  pop1()
{
    return S1[top1--];
}
int pop2()
{
    return S2[top2--];
}

void dequeue()
{
    int i,a,b;
    if(top1==-1 && top2==-1)
    {
        printf("queue id empty\n");
    }
    else
    {
        for(i=0; i<count; i++)
        {
            a = pop1();
            push2(a);
        }
        b = pop2();
        printf("the dequeued element is : %d\n",b);

        count--;
        for(i=0; i<count; i++)
        {
            a = pop2();
            push1(a);
        }
    }
}
void enqueue(int value)
{
    push1(value);
    count++;
}

void push1(int x)
{
    if(top1==N-1)
        printf("overflow condition \n");
    else
    {
        top1++;
        S1[top1]=x;
    }
}

void push2(int x)
{
    if(top2==N-1)
        printf("overflow condition \n");
    else
    {
        top2++;
        S2[top2]=x;
    }
}
