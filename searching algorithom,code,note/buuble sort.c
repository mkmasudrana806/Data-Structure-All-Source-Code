#include<stdio.h>
int main()
{
    int n,i,j,a[20];
    printf("enter array size: \n");
    scanf("%d",&n);

    for( i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int temp;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<n; j++)
            if(a[j+1]<a[j])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
    }
    for( i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
}
