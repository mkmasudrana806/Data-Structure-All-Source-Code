#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void createNode( );
void deleteFromBigin( );
struct node
{
    int data;
    struct node *next;
};
struct node *head,*newnode,*temp; //we globally declare the all pointer variable.therefore we can access it anywhere in the program.
int main()
{
    createNode( ); //here we call the create node function.

    deleteFromBigin( );
    getch();
}


// this is the create linked list or node function.
void createNode( )
{
    head=0;
    int choice=1;
    while(choice)
    {
        newnode = (struct node*) malloc(sizeof(struct node));
        printf("enter node\n");
        scanf("%d",&newnode->data);
        newnode->next=0; //we know that last node has  next part is zero. so assign it.
        if(head==0)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
        printf("any non zero value for add more node\n0 for stop create linked list\n");
        scanf("%d",&choice);
    }

    // ************************************************* traverse the linked list *******************************************
    printf("all node are or linked is: ");
    temp = head; // now temp point the linked list.
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}



void deleteFromBigin( )
{
//here we cann't create any pointer,becuase all the pointer we already declared in the global section.
    if(head==0)
    {
        printf("there is no node in the linked list\n");
    }
    else
    {
        temp = head; //now head and temp both point to linked list.
        head = head->next; // head update to the next address that's why head point next node,first node is vanished.
        free(temp); //we fread the temp pointer. since we update head to head
    }

    printf("\nafter delete a node at the beginning : ");
    temp = head; // now temp point the linked list.
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
