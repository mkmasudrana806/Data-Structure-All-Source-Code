//this is the searching program from an array element.
#include<stdio.h>
int main()
{
    int item, arr[5]= {2,5,1,6,9};
    printf("enter item to found\n");
    scanf("%d",&item);
//here passing array ,size,and item,

    int pos= search(arr,5,item);
    if(pos==-1)
        printf("item not found in the array\n");
    else
        printf("found this item,positon is: %d\n",pos+1);
    return 0;
}

int search(int arr[], int n, int item)
{
    int i;
    for(i=0; i<n; i++)
    {
        if(arr[i]==item)
            return i;
    }
//when loop condition not true so it not return anything, then return -1 out of the loop.
    return -1;
}
