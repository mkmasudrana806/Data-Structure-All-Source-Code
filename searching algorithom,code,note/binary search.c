#include<stdio.h>
int search(int [], int, int);
int main()
{
    int i,n, item, a[50];
    printf("enter size : ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    printf("enter item: ");
    scanf("%d",&item);
    int value = search(a,n,item);
    if(value==0)
    {
        printf("value is not found" );
    }
    else
        printf("value is found position is : %d",value);

}

int search(int a[],int n, int item)
{
    int i,j,temp;
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[j]<a[i])
            {
                temp= a[j];
                a[j] = a[i];
                a[i]=temp;
            }
        }
    }
    printf("sorted array is: ");
    for(i=0; i<n; i++)
        printf("%d ",a[i]);
    printf("\n");

    int lb, ub, mid;
    lb=0;
    ub=n-1;
    int found=0;
    while(lb<ub)
    {
        mid = (ub+lb)/2;
        if(item==a[mid])
        {
            found= mid;
            break;
        }
        else if(item>a[mid])
        {
            lb=mid+1;
        }

        else
        {
            ub=mid-1;
        }
    }
    return found;
}
