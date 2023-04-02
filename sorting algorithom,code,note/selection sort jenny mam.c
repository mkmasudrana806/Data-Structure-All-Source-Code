/*
firt find the minimum eleement form the array and it swap with firt positon. outer loop provide one by one element
now in inner loop linearly check it with the next all element and find the minimum element  and store it with the first element until we found minimum elelment.
*/
#include<stdio.h>
int main()
{
    int a[30];
    int i,temp,n,j;
    printf("enter size of array\n");
    scanf("%d",&n);
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[i]>=a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0; i<n; i++)
        printf("%d ",a[i]);
}
