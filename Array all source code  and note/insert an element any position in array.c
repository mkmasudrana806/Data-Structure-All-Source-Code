// insert an element by using two array one is orginal and second is temporary
#include<stdio.h>
int main()
{
    int a[ ]= {2,6,1,5,9,8};
    int size = sizeof(a)/sizeof(a[0]);
    int temp[size+1];
    int index=2,i;
    int key=100;

    for(i=0; i<size+1; i++)
    {
        if(i==index)
            temp[i]=key;
        else
            temp[i]=a[i];
    }
    for(i=0; i<size+1; i++)
        printf("%d ",temp[i]);
}
