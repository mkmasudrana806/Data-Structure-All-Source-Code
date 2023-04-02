// queue follow FIFO rule. insertion means enqueue and delete means dequeue
#include<stdio.h>
#define N 5
int queue[N];
int front=-1;
int reer=-1;
int main()
{
    enqueue(6);
    enqueue(6);
    enqueue(8);
    enqueue(2);
    enqueue(2);
    enqueue(2);
    display();
    dequeue();
    display();
    peek();

}

void peek()
{
    if(front==-1 && reer==-1)
        printf("there is no data in queue\n");
    else
    {
        printf("\nfront of the data is  : %d\n",queue[front]);
    }
}

void display()
{
    int i;
    printf("\nqueue list is: ");
    if(front==-1 && reer==-1)
    {
        printf("list is empty\n");
    }
    else
    {
        for(i=front; i<=reer; i++)
        {
            printf("%d ",queue[i]);
        }
    }
}
void dequeue()
{
    if(front==-1 && reer==-1)
    {
        printf("list is empty\n");
    }

    else if(front==reer)
    {
        front=reer=-1;
    }
    else
    {
        printf("\nafter deleting data is : %d\n",queue[front]);
        front++;
    }
}


void enqueue(int x)
{
    if(reer == N-1)
        printf("overflow condition or queue is full\n");
    else if(front==-1 && reer==-1)
    {
        front=reer=0;
        queue[reer]=x;
    }
    else
    {
        reer++;
        queue[reer] = x;
    }
}
