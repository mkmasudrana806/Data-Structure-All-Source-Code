// implementation of singly linked list.here we just create and traverse the linked list. and count number of node in the linked list.
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>//it's for getch() function.
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
        printf("enter 1 for new node and 0 for stop\n");
        scanf("%d",&choice);
    }
    int count=0; //count korar jonno ekta variable niesi just.
    temp = head; // amra traverse korar jonno temp er last er node k head kore dilam mane zero kore dilam mane zero kore dilam.
    while(temp!=0) //this loop is continue untill the condition is true.
    {
        printf("node is: %d\n",temp->data);
        temp = temp->next; //jehatu upore ekber print koresi.tai next er node access pete next node a jete temp = temp->next a jete hobe.
        count++; //here just count the number of node avaiable here.
    }
    printf("number of node is: %d\n",count);
    getch();
}
