#include<stdio.h>
#define N 5
int stack[N];
int top=-1;
int main()
{
    int opt;
    do
    {
        printf("\n1.push or insert\n2.pop or delete\n3.peek of last element\n4.display the stackt\nenter your choose\n");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        default:
            printf("enter valid option: \n");
        }
    }
    while(opt!=0);
}


//to push something first we need to take the value,then we need to check overflow condition that stact is Full or not.
//so push() function as well top function .
//if stack is full then we cannot push any element.it show overflow condition
//we need top++; so first top becomes top=0.then we first index insert element.
void push()
{
    int x;
    printf("enter data: ");
    scanf("%d",&x);
    if(top==N-1)
    {
        printf("overflow condition\n");
    }
    else
    {
        top++;
        stack[top]=x;
    }
}


//when we pop or delete any data.first check the underflow condition.
//then top--;
void pop()
{
    int item;
    if(top==-1)
    {
        printf("underflow condition \n");
    }
    else
    {
        int item;
        item = stack[top];
        top--;
        printf("deleted data is: %d\n",item);

    }
}

// peek() or top() means getting the top most element of the stack.without removing the element.
//when we check that what is the top element avaialbe.


void peek()
{
    if(top==-1)
    {
        printf("stack is empty\n");
    }
    else
    {
        printf("the top most element is: %d\n",stack[top]);
    }
}



//dsiplay or traverse the stack.we can traverse top of the stack or start of the stack.
//here i am traverse at last of the stack.
void display()
{
    int i;
    for(i=top; i>=0; i--)
    {
        printf("%d ",stack[i]);
    }

}
