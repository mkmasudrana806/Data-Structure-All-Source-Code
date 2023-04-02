#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void createNode( );
void getLen( );
void deleteFromBigin( );
void deleteFromEnd( );
void deleteFromSpecificPos( );
struct node
{
    int data;
    struct node *next;
};
struct node *head,*newnode,*temp; //we globally declare the all pointer variable.therefore we can access it anywhere in the program.
int main()
{
    createNode( ); //here we call the create node function.
    getLen( );
    deleteFromBigin( ); // here i call the delete at the beginning function.
    deleteFromEnd( ); // here i call the delete end of the linked list.
    deleteFromSpecificPos( );
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


//this is the find length of the linked list function .
void getLen( )
{
//others pointer we declare in the global section and create linked list in the create() function section.
    int count =0;
    temp = head;
    while(temp!=0)
    {
        count++;
        temp = temp->next;
    }
    printf("number of node is: %d\n",count);
    printf("so the length of the linked list is: %d\n",count);
}


//this is the delete a node at the beginning of the programme.
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


//this is the delete node end of the programme.
void deleteFromEnd( )
{
//i cann't any pointer because all pointer are declared in the globally section.
    struct node *preNode; // another pointer we declare in the global section.
    temp = head; //now temp and head both point to the linked list.
    while(temp->next!=0) //until we reached the temp->next!=0.condition temp!=0 noi, karon amra to temp->next er age jabo.
    {
        preNode=temp;
//when we reached before last node the loop will be stop. er agei amra store kore rakhsi preNode a address;
        temp = temp->next; //temp jodio zero hoi but loop r chole na,tai ager node ta preNode a save thake.
    }
    if(temp==head)
    {
        //when temp has only one value or only head.so there is only one node,so after delete head=0.
        head=0;
    }
    else
    {
        preNode->next=0;
        printf("\nafter delete a node end of the linked list: ");
        temp = head; // now temp point the linked list.
        while(temp!=0)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
        free(temp);
    }

}

//this is the delete a specific node from the linked list.
void deleteFromSpecificPos( )
{
    struct node *nextNode;
    int pos,i=1;
    printf("\nenter position\n");
    scanf("%d",&pos);
//take the position from the user.
    temp=head;
    while(i<pos-1) //we traverse before specific position.
    {
        temp = temp->next;
        i++;
    }
    nextNode = temp->next; //when we reached before position. we newnode = temp->next. mane position er ta hoilo.
    temp->next = nextNode->next; //akhon sei position er next address ta temp next a nilam mane before position a nilam.
    printf("\nafter deleting a specific position: ");
    temp = head;
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
    free(temp);
}
