/*time complexity :for push  operation order of O(n).because first traverse the list
*time complexity :for pop  operation order of O(1).no need to traverse,direct tail or head die pop kora.
*we can delete top or start of the linked list in stack.
*to maintain time complexity we always push and pop head only.in this case order of O(1).
*in linked in stack we take top instead of head pointer.karon top tay sob maintain korbe.
in linked list,previous node point the newnode,but in stack,newnode always point previous node.this is the main difference.
*/
#include<stdio.h>

struct node
{
    int data;
    struct node *next;
};
struct node *top=0;
int main()
{
    int opt;
    do
    {
        printf("\n1.push or insert\n2.display the stack\n3.peek of last element\n4.pop element\nenter your choose\n");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            push(3); //we just call by one value.
            break;
        case 2:
            display();
            break;
        case 3:
            peek();
            break;
        case 4:
            pop();
            break;
        default:
            printf("enter valid option\n");
        }
    }
    while(opt!=0);
}



//note in linked list we maintain head pointer,but in stack we maintain top pointer.
//in linked list previous node point next node,but in stack top maintain previous node.
void push(int x)
{
//here we have just call by one value,we use loop to add again and again.
    struct node *newnode;
    newnode = (struct node*) malloc(sizeof(struct node));
    newnode->data = x;
    newnode->next = top;
    top = newnode;

}


void display()
{
    struct node *temp;
    temp = top; //temp now pointing to stack similar like top.
    if(top==0)
    {
        printf("list is empty\n");
    }

    else
    {
        while(temp!=0)
        {
            printf("%d ",temp->data);
            temp = temp->next;
        }
    }

}

void peek()
{
    if(top==0)
    {
        printf("there is not stack\n");
    }
    else
    {
        printf("top element is: %d\n",top->data);
    }
}


void pop()
{
    struct node *temp;
    temp = top;
    if(temp==0)
    {
                  ++
                  +
        printf("there is no element\n");
    }
    else
    {
        printf("deleted data is: %d\n",top->data);
        top = top->next;
        free(temp);
    }
}
