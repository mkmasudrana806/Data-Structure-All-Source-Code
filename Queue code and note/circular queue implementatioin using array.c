#include<stdio.h>
#define N 5
int front =-1;
int reer = -1;
int queue[N];
int main()
{
    enqueue(5);
}


void dequeue()
{
    if(front==-1 && reer==-1)
    {
        printf("underflow condition\n");
    }
    else if(front==reer)
    {
        front = reer = -1;
    }
}


void enqueue(int value)
{
    if(front==-1 && reer==-1)
    {
        front = reer = 0;
        queue[reer] = value;
    }
    else if((reer+1)%N==front)
    {
        printf("queue is full \n");
    }
    else
    {
        reer = (reer+1)%N;
        queue[reer] = value;
    }
}
