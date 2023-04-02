//take temp array,copy orginal array to the temp array,when i=index becomes,use continue keyword to skip copy.
//new array or temp array size must be orginal array size - 1;

#include<stdio.h>
int main()
{
    int a[ ]= {2,6,1,5,9,8};
    int size = sizeof(a)/sizeof(a[0]);
    int temp[size-1];
    int index=2,i,j;
    int key=100;

    for(i=0,j=0; i<size; i++)
    {
        if(i==index)
           continue;
        else
            temp[j++]=a[i];
    }
    for(i=0; i<size-1; i++)
        printf("%d ",temp[i]);
}
