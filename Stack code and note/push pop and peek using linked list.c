#include<stdio.h>
struct node
{
    int data;
    struct node *next;
};

struct node *top=0;

int main()
{
    push(1);
    display();
    push(2);
    display();
    push(3);
    display();
    push(4);
    display();
    push(5);
    display();
    peek();
    pop( );
    display();

}

void pop()
{
              if(top==0)
                            printf("underflow condition\n");
              else
              top = top->next;
}


void peek()
{
    if(top==0)
    {
        printf("stack is empty\n");
    }

    else
    {
        printf("top most data is : %d\n",top->data);
    }
}
void display()
{
    struct node *temp;
    temp = top;
    if(top==0)
        printf("stack is empty\n");
    else
    {
        printf("data is : ");
        while(temp!=0)
        {
            printf("%d ",temp->data);
            temp = temp->next;
        }
    }
    printf("\n");
}

void push(int value)
{

    struct node *newnode;
    newnode = (struct node*) malloc(sizeof(struct node));
    newnode->data=value;

    newnode->next = top;
    top = newnode;

}
