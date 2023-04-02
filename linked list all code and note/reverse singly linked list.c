
#include<stdio.h>
#include<stdlib.h>
void create( );
void display( );
void insertAtBegin( );
void insertAtEnd( );
void insertAtAnyPosition( );
struct node
{
    int data;
    struct node *next;
};

struct node *head, *newnode, *temp;
int count=0;
int main()
{
    int ch;
    do
    {
        printf("enter option to perform: \n1.create\n2.insert at beginning\n3.display\n4.insert at end\n5.insert at any position\n6.reverse\n");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            create();
            break;
        case 2:
            insertAtBegin();
            break;
        case 3:
            display( );
            break;
        case 4:
            insertAtEnd( );
            break;
        case 5:
            insertAtAnyPosition( );
            break;
        case 6:
            reverse( );
            break;
        default:
            printf("invalid option\n");
        }
    }
    while(ch!=0);
}



void reverse()
{
    struct node *preNode,*nextNode,*currenNode; //others node are declared in global section.
    preNode=0;
    currenNode = nextNode = head;
    while(nextNode!=0)
    {
        nextNode = nextNode->next;
        currenNode->next = preNode;
        preNode = currenNode;
        currenNode = nextNode;
    }
    head = preNode;
}
//here we insert at any given position. first traverse the position then insert.
void insertAtAnyPosition( )
{
    system("cls");
    int pos;
    //*temp,*head,*newnode global declared
    printf("position to insert: ");
    scanf("%d",&pos);
    newnode= (struct node*)malloc(sizeof(struct node));
    printf("enter data to insert: ");
    scanf("%d",&newnode->data);

    if(pos==0)
        printf("there is no node in linked list\n");
    else if(pos>count || pos<0)
    {
        printf("invalid position \n");
    }
    else
    {
        int i=1;
        temp = head;
        while(i<pos)
        {
            temp = temp->next;
            i++;
        }
        newnode->next=temp->next;
        temp->next=newnode;
    }

}
//insert at end of the linked list.need to traverse end of the linked list,then insert.
//time complexity order of O(n)
void insertAtEnd()
{
    system("cls");
    //*temp,*head,*newnode global declared
    newnode= (struct node*)malloc(sizeof(struct node));
    printf("enter data to insert: ");
    scanf("%d",&newnode->data);
    newnode->next = 0;
    temp=head;
    while(temp->next!=0)
    {
        temp=temp->next;
    }
    temp->next=newnode;

}


//insert at begin.
void insertAtBegin( )
{
    // system("cls");
    int choice=1;
    while(choice!=0)
    {
        newnode = (struct node*) malloc(sizeof(struct node));
        printf("enter data to insert: ");
        scanf("%d",&newnode->data);
        newnode->next=head;
        head=newnode;
        printf("add more? (1/0)? ");
        scanf("%d",&choice);
    }
}

//to display the linked list i create a function .
void display()
{
    system("cls");
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


