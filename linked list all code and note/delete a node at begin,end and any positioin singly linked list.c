
#include<stdio.h>
#include<stdlib.h>
void create( );
void display( );
void deleteAtBegin();
void deleteAtEnd( );
struct node
{
    int data;
    struct node *next;
};

struct node *head, *newnode, *temp;
int count;
int main()
{
    int ch;
    do
    {
        printf("enter option to perform: \n1.create\n2.display\n3.delete at begin\n4.delete at end\n");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            create();
            break;
        case 2:
            display( );
            break;
        case 3:
            deleteAtBegin();
            break;
        case 4:
            deleteAtEnd( );
            break;
        default:
            printf("invalid option\n");
        }
    }
    while(ch!=0);
}


//function to delete a node from any position in the linked list
void deleteAnyPosition()
{
    struct node *nextNode;
    int i=1,pos;
    temp=head;
    printf("enter your position to delete: ");
    scanf("%d",&pos);
    while(i<pos-1)
    {
        temp=temp->next;
        i++;
    }
    nextNode=temp->next;
    temp->next=nextNode->next;
    free(nextNode);
}

//delete end of the linked list.
void deleteAtEnd()
{
//jokhon condition true,tokhn previous=temp kore disi,r temp k next kore disi,
//so per condition true te,previous pointer always ager node point korbe,
//ses a previous->next=0; kore dilei holo.
    struct node *previous;
    temp = head;
    while(temp->next!=0)
    {
        previous=temp;
        temp=temp->next;
    }
    if(temp==head)
    {
        head=0;
        free(temp);
    }
    else
    {
        previous->next=0;
        free(temp);
    }


    /*another way to delete,
    void deleteAtEnd()
    {
    temp = head;
    int pos=1;
    while(pos<count-1)
    {
        temp=temp->next;
        pos++;
    }
    temp->next=0;
    }
    */
}

void deleteAtBegin()
{
    if(head==0)
        printf("there is not node in this linked list\n");
    else
    {
        temp = head;
        head = head->next;
        free(temp);
    }
}


//to display the linked list i create a function .
void display()
{
    system("cls");
    count=0;
    temp = head;
    while(temp!=0)
    {
        printf("node is : %d\n",temp->data);
        temp = temp->next;
        count++; //count variable declared in global
    }
    printf("number of node is : %d\n",count);
}

//create a linked listl
void create()
{
    system("cls");
//here we declare *head,*newnode,*tmep as global.
    head=0;
    int choice=1;
    while(choice!=0)
    {
        newnode = (struct node*) malloc(sizeof(struct node));
        printf("enter data for node: ");
        scanf("%d",&newnode->data);
        newnode->next=0;
        if(head==0)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next=newnode;
            temp = newnode;
        }
        printf("another node create? (0/1)?");
        scanf("%d",&choice);
    }
}


