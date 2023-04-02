//insert a node end of the linked list.
/* since we want to insert end of the linekd ,we cann't direct insert.we need to traverse end of the linked list.
after traversing end of the linked list then we can insert in last node the address of newly created node.

*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{
    struct node *head,*newnode,*temp;
    head=0;//initially we assign head=zeor.because amra akhono node er memory allocation kori nai.tai head kaoke to point kore na,so zero.
    int choice=1;

    //******************************************below i am implemention the linked list and****************************************
    while(choice)
    {
//here we create a node names newnode usign malloc() function.malloc() function return pointer address to the starting of the memory.
        newnode=(struct node*) malloc(sizeof(struct node));
        printf("enter node\n");
        scanf("%d",&newnode->data);//amra node er data part a value input niesi.
        newnode->next=0;//jehatu node er next part ta zero hobe jokhon ota last er node hobe.
        if(head==0)
        {
            //when head zero thakbe.tokhon amra head=newnode assign kore dibo karon upore amra newnode create koresi.akhon head point korbe node k.
// as well as we assign newnode to temp poniter.now head and pointer both point to the newnode.
//temp niekaj korbo amra. karon head k change kora jabe na.
            head=temp=newnode; //ei if condition ta ekber e true hobe karon ata surur node a hobe sudu.
        }
        else
        {
//amra temp nie kaj korbo jehatu temp o newnode k point kore.temp er next a amra newnode rekhe dibo.
//ter por sei newnode akhon temp er hoye jabe so temp=newnode.
            temp->next=newnode;
            temp=newnode;
        }
        printf("press any non zero value to continue and press zero to stop\n");
        scanf("%d",&choice);
    }

//********************************** here we count number of node and traverse or print all node int linked list**************************
    int count=0; //count korar jonno ekta variable niesi just.
    temp = head; // amra traverse korar jonno temp er last er node k head kore dilam mane zero kore dilam mane zero kore dilam.
    while(temp!=0) //this loop is continue untill the condition is true.
    {
        printf("node is: %d\n",temp->data);
        temp = temp->next; //jehatu upore ekber print koresi.tai next er node access pete next node a jete temp = temp->next a jete hobe.
        count++; //here just count the number of node avaiable here.
    }
    printf("number of node is: %d\n",count);

//****************************************** below we inset a node at end of the linked list ********************************************
    newnode = (struct node*) malloc(sizeof(struct node));//here we create a newnode for taking value from user to insert
    printf("enter value to insert at the end of the linked list\n");
    scanf("%d",&newnode->data);// we store value to the newnode in data part
    newnode->next=0;  //we assign newnode next part to zero.because we want to insert end of the linked list.
    //since end of the node has next = zero. because this node cann't point to the any node.
    temp=head;
//since we cann't change head pointer.tai traverse korar jonno temp=head nilam.akhon temp o head er moto linked list point korbe
//tai temp er maddhome amra traverse korbo end of the linked list until we found temp->next!=0.


//here just traverse end of the linked list. end a gie ter por temp->next a newnode die diebo.taholei last er node new node k point korbe.
    while(temp->next!=0)
    {
        temp=temp->next;
    }

    temp->next = newnode;
    newnode->next=0;

    temp=head; //here we assign head to temp.mane akhon temp er kase all node mane linked list chole aslo.
    //amra chaile ata na kore. head er sirial dhore kaj korte pari,temp die korle valo.
    //jemon head!=0..inside whiel loop head->data... head=head->next; this will also work.
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    getch();
}
