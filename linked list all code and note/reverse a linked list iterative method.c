//this is reversing a linked list.
//for reversing a linked list we need to three pointer, previosNode,currentNode,nextNode.
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void createLinkedList( );
void reverse ( );
struct node
{
    int data;
    struct node *next;
};
struct node *head,*newnode,*temp,*previousNode,*currentNode,*nextNode;
int main()
{
    createLinkedList( );
    reverse( );

}


void reverse( )
{
    struct node *previousNode,*currentNode,*nextNode;

    previousNode=0; //since we do reverse so first er diker node er next pointer part zero hobe.

    currentNode=nextNode=head; //akhn current,next,head sobai pointer korbe linked list k.
    while(nextNode!=0) //since ses er dike jassi tai last a zero paoa jabei.so while continue untill it's true.
    {
        nextNode=nextNode->next;
        currentNode->next = previousNode;
        previousNode = currentNode;
        currentNode = nextNode;
    }
    head = previousNode;
printf("\n*************** here we traverse and reverse the linked list *****************\n")

    printf("\nhere print the reverse linked list\n");
    temp = head;
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
}

//here i have created a linked list and print or traverse them.
void createLinkedList()
{
    head = 0;
    int choice = 1;
    while (choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("enter node\n");
        scanf("%d", &newnode->data);
        newnode->next = 0; // we know that last node has  next part is zero. so assign it.
        if (head == 0)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
        printf("any non zero value for add more node\n0 for stop create linked list\n");
        scanf("%d", &choice);
    }
    // ************************************************* traverse the linked list *******************************************
    printf("all node are or linked is: ");
    temp = head; // now temp point the linked list.
    while (temp != 0)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }

}
