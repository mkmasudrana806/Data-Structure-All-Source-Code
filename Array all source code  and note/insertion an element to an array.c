//delete an element from an array by value. not positon.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[50];
    int num,item,size,i,pos=0;
    printf("enter size of array\n");
    scanf("%d",&size);
    printf("enter element for this array\n");
    for(i=0; i<size; i++)
        scanf("%d",&a[i]);

    printf("which element want to delete\n: ");
    scanf("%d",&item);
    for(i=0; i<size; i++)
    {
        if(a[i]==item)
        {
            pos = i;
        }
    }
    if(pos==0)
    {
        printf("data not found!\n");
        exit(0);
    }
    else
    {
        printf("index is: %d\n",pos);
        for(i=pos; i<size-1; i++)
        {
            a[i]=a[i+1];
        }
        size--;
        for(i=0; i<size; i++)
            printf("%d ",a[i]);
    }

}

