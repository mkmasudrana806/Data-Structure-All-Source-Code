// this is bubble sort algorithom. upper to lower sort in number.
#include<stdio.h>
int main()
{
    //int a[5]= {3,1,5,7,2},i,j,temp;
    int a[10],i,j,n,temp,count=0;
    printf("how many element want to add to this array: ");
    scanf("%d",&n);
    printf("enter element for sorting: ");
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    for(i=0; i<n; i++)
    {
        for(j=0; j<n-1-i; j++)
        {
// bubble sort mane boro number k ses a nie jaoa and soton number k samne ana. selection sort holo soto number k samne ana.
            if(a[j]>a[j+1])
            {
                count++;
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(i=0; i<n; i++)
        printf("%d ",a[i]);
    printf("count: %d",count);
}



