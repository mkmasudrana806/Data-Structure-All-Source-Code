#include<stdio.h>
struct node
{
    int data;
    struct node *next;
};
struct node *front=0;
struct node *reer=0;
int main()
{
    enqueue(2);
    enqueue(1);
    enqueue(5);
    enqueue(3);
    display();
    dequeue();
    peek();
    display();
}

void peek()
{
    if(front==0 && reer==0)
        printf("there is no data in the queue\n");
    else
    {
        printf("front data is : %d\n",front->data);
    }
}


void dequeue()
{
    struct node *temp;
    temp = front;
    if(front==0 && reer==0)
    {
        printf("list is empty\n");
    }
    else
    {
        temp = front;
        printf("\ndeleted data is : %d\n",front->data);
        front = front->next;
        free(temp);
    }
}

void display()
{
    struct node *temp;
    if(front==0 && reer==0)
    {
        printf("list is empty\n");
    }
    else
    {
        temp = front;
        while(temp!=0)
        {
            printf("%d ",temp->data);
            temp = temp->next;
        }
    }
}

void enqueue(int value)
{

    struct node *newnode;
    newnode = (struct node*) malloc(sizeof(struct node));
    newnode->data=value;
    newnode->next=0;
    if(front==0 && reer==0)
    {
        front=reer=newnode;
    }
    else
    {
        reer->next=newnode;
        reer=newnode;
    }
}
