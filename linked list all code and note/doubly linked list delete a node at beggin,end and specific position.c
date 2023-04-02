
//doubly linked list to delete a node at begin,end and a specific position.
#include<stdio.h>
#include<stdlib.h>
void createLinkedList( );
void deleteAtBegin( );
void deleteAtEnd( );
void deleteSpecificPosition( );
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
struct node *head,*tail,*temp;
int lenOfLinkedList=0;
int main()
{

    createLinkedList( );
    deleteAtBegin( );
    deleteAtEnd( );
    deleteSpecificPosition( );

}

//delete a specific node from linked list.
void deleteSpecificPosition( )
{
    int pos,i=1;
    struct node *temp;
    printf("\nenter position wanto to delete\n");
    scanf("%d",&pos);

//when pos=1,that means delete at begin,that's why i called the deleteAtBegin() function.
    if(pos==1)
    {
        deleteAtBegin( );
    }

//when pos=end of the linked list or lenOfLinkedList,that means delete at begin,that's why i called the deleteAtEnd() function.
    else if(pos==lenOfLinkedList)
    {
        deleteAtEnd( );
    }
//when pos is not equal to beginnig ,end of the linked list then we delete specific positon

    else
    {
        temp = head; //now temp and head poniter the linked list
//continue this while loop,we reched the given position want to delete.
        while(i<pos)
        {
            temp = temp->next;
            i++;
        }
        temp->prev->next=temp->next;
        temp->next->prev=temp->prev;
        free(temp);
    }
    //here we print the  linked list after deleting end of the node.
    printf("\nafter deleting a node from a specific position,the linked list are: ");
    temp = head;
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }

}

//delete a node at the end of the linked list
void deleteAtEnd( )
{
    struct node *temp;
    if(head==0)
    {
        printf("list are empty\n");

    }
    else
    {
        temp = tail;
        tail->prev->next=0; //first a tail die temp k point kore,tail er prev a ase tail er ager node address,
        //so tail gelo sekhane,akhon seiter next =0.tai age j node a silo tail,seiter sathe bafore node connection vanished.
        tail =tail->prev;
        free(temp);
    }
    //here we print the  linked list after deleting end of the node.
    printf("\nafter deleting at end,the linked list are: ");
    temp = head;
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
}


//here we delete a node at beginning from the linked list
void deleteAtBegin( )
{
    struct node *temp;
    if(head==0)
    {
        printf("\nit is a empty linked list\n");
    }
    else
    {
        temp=head;
        head = head->next;
        head->prev=0;
        free(temp);
    }

    //here we print the  linked list after deleting the fist node.
    printf("\nafter deleting at beginning,the linked list are: ");
    temp = head;
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
}



//here we creating a linked list.
void  createLinkedList( )
{
    struct node *newnode;
    head=0;
    int choice=1;
    while(choice!=0)
    {
        newnode = (struct node*) malloc(sizeof(struct node));
        printf("enter node: ");
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
        printf("1 for yes 0 for no\n");
        scanf("%d",&choice);
    }
    //here we print the  linked list
    printf("\nthe linked list are: ");
    temp = head;
    while(temp!=0)
    {
        printf("%d ",temp->data);
        lenOfLinkedList++;
        temp = temp->next;
    }
    printf("\nThe length of linked list is: %d\n",lenOfLinkedList);
}
