//reverse a doubly linked list.reverse means linked reverse not swap.
#include<stdio.h>
#include<stdlib.h>
void createLinkedList( );
void reverseDoublyLinkedList( );
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
struct node *head,*tail;

int main()
{
    createLinkedList( );
    reverseDoublyLinkedList( );
}


//here we are reversing the linked list
void reverseDoublyLinkedList( )
{
    struct node *currentNode,*nextNode;
    currentNode = head;
    while(currentNode!=0)
    {
        nextNode=currentNode->next;
        currentNode->next = currentNode->prev;
        currentNode->prev = nextNode;
        currentNode = nextNode;
    }
    currentNode = head;
    head = tail;
    tail = currentNode;
    printf("after reversing the linked list are: ");
    while(head!=0)
    {
        printf("%d ",head->data);
        head = head->next;
    }

}

//here create the linked list
void createLinkedList( )
{
    head =0;
    int choice=1;
    struct node *newnode,*temp;
    while(choice)
    {
        newnode = (struct node*) malloc(sizeof(struct node));
        printf("enter node\n");
        scanf("%d",&newnode->data);

        newnode->prev = 0;
        newnode->next = 0;

        if(head==0)
        {
            head = tail = newnode;
        }
        else
        {
            tail->next=newnode;
            newnode->prev = tail;
            tail = newnode;
        }
        printf("1 for conitnue 0 for no\n");
        scanf("%d",&choice);
    }
//here temp and head both point to the linked list.
    printf("all node in linked list is: ");
    temp=head;
    while(temp!=0)
    {
        printf("node is: %d\n",temp->data);
        temp = temp->next;
    }
}




